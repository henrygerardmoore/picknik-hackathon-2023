#include <behaviortree_cpp/bt_factory.h>
#include <moveit_studio_behavior_interface/behavior_context.hpp>
#include <moveit_studio_behavior_interface/shared_resources_node_loader.hpp>

#include <get_block_sorting_plan/get_block_sorting_plan.hpp>

#include <pluginlib/class_list_macros.hpp>

namespace get_block_sorting_plan
{
  class GetBlockSortingPlanBehaviorsLoader : public moveit_studio::behaviors::SharedResourcesNodeLoaderBase
  {
  public:
    void registerBehaviors(BT::BehaviorTreeFactory &factory,
                           const std::shared_ptr<moveit_studio::behaviors::BehaviorContext> &shared_resources) override
    {
      using namespace moveit_studio::behaviors;

      registerBehavior<GetBlockSortingPlan>(factory, "GetBlockSortingPlan", shared_resources);
    }
  };
} // namespace get_block_sorting_plan

PLUGINLIB_EXPORT_CLASS(get_block_sorting_plan::GetBlockSortingPlanBehaviorsLoader,
                       moveit_studio::behaviors::SharedResourcesNodeLoaderBase);
