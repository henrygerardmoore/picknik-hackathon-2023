find_package(ament_cmake_gtest REQUIRED)

ament_add_gtest(
  test_behavior_plugins
  test_behavior_plugins.cpp
)
ament_target_dependencies(test_behavior_plugins ${THIS_PACKAGE_INCLUDE_DEPENDS})

# Needed to link against the source behaviors
target_link_libraries(test_behavior_plugins offset_pose)
