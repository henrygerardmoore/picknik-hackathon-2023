cmake_minimum_required(VERSION 3.16.3)
project(get_block_sorting_plan)

# Set MoveIt's typical CMake settings, including C++ standard version
find_package(moveit_common REQUIRED)
moveit_package()

find_package(moveit_studio_behavior_interface REQUIRED)
find_package(pluginlib REQUIRED)
find_package(tamp_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

set(
  THIS_PACKAGE_INCLUDE_DEPENDS
  moveit_studio_behavior_interface
  pluginlib
  tamp_msgs
  geometry_msgs
  sensor_msgs
)

# AprilTag Behavior
add_library(
  get_block_sorting_plan SHARED
  src/get_block_sorting_plan.cpp
  src/register_behaviors.cpp
)
target_include_directories(
  get_block_sorting_plan
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PUBLIC $<INSTALL_INTERFACE:include>
)
ament_target_dependencies(get_block_sorting_plan ${THIS_PACKAGE_INCLUDE_DEPENDS})

# Install Libraries
install(
  TARGETS get_block_sorting_plan
  EXPORT get_block_sorting_planTargets
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

install(
  DIRECTORY
    config
  DESTINATION
    share/${PROJECT_NAME}
)

# Export the behavior plugins defined in this package so they are available to plugin loaders that load the
# behavior base class library from the moveit_studio_behavior package.
pluginlib_export_plugin_description_file(moveit_studio_behavior_interface get_block_sorting_plan_plugin_description.xml)

ament_export_targets(get_block_sorting_planTargets HAS_LIBRARY_TARGET)
ament_export_dependencies(${THIS_PACKAGE_INCLUDE_DEPENDS})
ament_package()
