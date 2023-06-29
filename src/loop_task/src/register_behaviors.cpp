#include <behaviortree_cpp/bt_factory.h>
#include <moveit_studio_behavior_interface/behavior_context.hpp>
#include <moveit_studio_behavior_interface/shared_resources_node_loader.hpp>

#include <loop_task/loop_task.hpp>

#include <pluginlib/class_list_macros.hpp>

namespace loop_task
{
class LoopBehaviorsLoader : public moveit_studio::behaviors::SharedResourcesNodeLoaderBase
{
public:
  void registerBehaviors(BT::BehaviorTreeFactory& factory,
                     const std::shared_ptr<moveit_studio::behaviors::BehaviorContext>&) override
  {
    moveit_studio::behaviors::registerBehavior<LoopTask>(factory, "LoopTask");
  }
};
}  // namespace loop

PLUGINLIB_EXPORT_CLASS(loop_task::LoopBehaviorsLoader,
                       moveit_studio::behaviors::SharedResourcesNodeLoaderBase);
