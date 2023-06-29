#include <loop_task/loop_task.hpp>

namespace loop_task {
LoopTask::LoopTask(const std::string &name, const BT::NodeConfiguration &config)
    : BT::DecoratorNode(name, config)
{}

BT::PortsList LoopTask::providedPorts()
{
    return BT::PortsList({
        BT::InputPort<tamp_msgs::msg::PickPlacePlan>("plan"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("pick_pose"),
        BT::OutputPort<geometry_msgs::msg::PoseStamped>("place_pose"),
    });
}

BT::NodeStatus LoopTask::tick()
{
    // initialization of this node: read the input poert with the plan
    if (status() == BT::NodeStatus::IDLE) {
        clear();
        if (!getInput("plan", _current_plan)) {
            return BT::NodeStatus::FAILURE;
        }
    }

    // not executing means that we are ready to pop a new action from plan
    if (!_executing_child) {
        // empty plan: stop
        if (_current_plan.actions.empty()) {
            return BT::NodeStatus::SUCCESS;
        }

        setStatus(BT::NodeStatus::RUNNING);
        _executing_child = true;
        // set ports
        auto const &action = _current_plan.actions.front();
        setOutput("pick_pose", action.pick_pose);
        setOutput("place_pose", action.place_pose);
        // pop front from the vector
        _current_plan.actions.erase(_current_plan.actions.begin()); // pop front
    }

    // if we already popped an action from the plan and it is being executed
    if (_executing_child) {
        auto status = child_node_->executeTick();
        if (status == BT::NodeStatus::RUNNING) {
            return BT::NodeStatus::RUNNING;
        }
        if (status == BT::NodeStatus::FAILURE) {
            resetChild();
            clear();
            return BT::NodeStatus::FAILURE;
        }
        if (status == BT::NodeStatus::SUCCESS) {
            resetChild();
            _executing_child = false;
        }
    }

    return BT::NodeStatus::RUNNING;
}

} // namespace loop_task
