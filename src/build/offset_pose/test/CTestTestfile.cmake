# CMake generated Testfile for 
# Source directory: /opt/moveit_studio/user_ws/src/solution_offset_pose/test
# Build directory: /opt/moveit_studio/user_ws/build/offset_pose/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_behavior_plugins "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/opt/moveit_studio/user_ws/build/offset_pose/test_results/offset_pose/test_behavior_plugins.gtest.xml" "--package-name" "offset_pose" "--output-file" "/opt/moveit_studio/user_ws/build/offset_pose/ament_cmake_gtest/test_behavior_plugins.txt" "--command" "/opt/moveit_studio/user_ws/build/offset_pose/test/test_behavior_plugins" "--gtest_output=xml:/opt/moveit_studio/user_ws/build/offset_pose/test_results/offset_pose/test_behavior_plugins.gtest.xml")
set_tests_properties(test_behavior_plugins PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/moveit_studio/user_ws/build/offset_pose/test/test_behavior_plugins" TIMEOUT "60" WORKING_DIRECTORY "/opt/moveit_studio/user_ws/build/offset_pose/test" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/opt/moveit_studio/user_ws/src/solution_offset_pose/test/CMakeLists.txt;3;ament_add_gtest;/opt/moveit_studio/user_ws/src/solution_offset_pose/test/CMakeLists.txt;0;")
subdirs("../gtest")
