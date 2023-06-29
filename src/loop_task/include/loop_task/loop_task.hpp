#pragma once

#include <tamp_msgs/msg/pick_place_plan.hpp>
#include <behaviortree_cpp/decorator_node.h>

namespace loop_task {

class LoopTask : public BT::DecoratorNode
{
public:
    LoopTask(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

    void halt() override { clear(); }

private:
    tamp_msgs::msg::PickPlacePlan _current_plan;
    bool _executing_child = false;

    void clear()
    {
        _current_plan.actions.clear();
        _executing_child = false;
    }
};
} // namespace loop_task
