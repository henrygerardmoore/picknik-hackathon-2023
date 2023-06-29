#pragma once

#include <tamp_msgs/PickPlacePlan.hpp>
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
    tamp_msgs::PickPlacePlan _current_plan;
    bool _executing_child = false;

    void clear()
    {
        _current_plan = {};
        _executing_child = false;
    }
};
} // namespace loop_task
