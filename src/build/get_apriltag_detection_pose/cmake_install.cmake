# Install script for directory: /opt/moveit_studio/user_ws/src/solution_get_apriltag_detection_pose

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/opt/moveit_studio/user_ws/install/get_apriltag_detection_pose")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libget_apriltag_detection_pose.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libget_apriltag_detection_pose.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libget_apriltag_detection_pose.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/libget_apriltag_detection_pose.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libget_apriltag_detection_pose.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libget_apriltag_detection_pose.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libget_apriltag_detection_pose.so"
         OLD_RPATH "/opt/overlay_ws/install/moveit_studio_behavior_interface/lib:/opt/moveit_studio/user_ws/install/apriltag_ros_msgs/lib:/opt/overlay_ws/install/moveit_studio_agent_msgs/lib:/opt/overlay_ws/install/moveit_studio_behavior_msgs/lib:/opt/underlay_ws/install/moveit_task_constructor_core/lib:/opt/underlay_ws/install/moveit_task_constructor_msgs/lib:/opt/underlay_ws/install/moveit_ros_planning_interface/lib:/opt/underlay_ws/install/moveit_ros_move_group/lib:/opt/ros/humble/lib:/opt/underlay_ws/install/moveit_ros_warehouse/lib:/opt/underlay_ws/install/moveit_ros_planning/lib:/opt/underlay_ws/install/moveit_ros_occupancy_map_monitor/lib:/opt/underlay_ws/install/moveit_core/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/opt/underlay_ws/install/moveit_msgs/lib:/opt/underlay_ws/install/rviz_marker_tools/lib:/opt/underlay_ws/install/behaviortree_cpp/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libget_apriltag_detection_pose.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE DIRECTORY FILES "/opt/moveit_studio/user_ws/src/solution_get_apriltag_detection_pose/config")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/test/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE FILE FILES "/opt/moveit_studio/user_ws/src/solution_get_apriltag_detection_pose/get_apriltag_detection_pose_plugin_description.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/environment" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/get_apriltag_detection_pose")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/get_apriltag_detection_pose")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/environment" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/environment" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_index/share/ament_index/resource_index/packages/get_apriltag_detection_pose")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/moveit_studio_behavior_interface__pluginlib__plugin" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_index/share/ament_index/resource_index/moveit_studio_behavior_interface__pluginlib__plugin/get_apriltag_detection_pose")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake/get_apriltag_detection_poseTargetsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake/get_apriltag_detection_poseTargetsExport.cmake"
         "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/CMakeFiles/Export/share/get_apriltag_detection_pose/cmake/get_apriltag_detection_poseTargetsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake/get_apriltag_detection_poseTargetsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake/get_apriltag_detection_poseTargetsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/CMakeFiles/Export/share/get_apriltag_detection_pose/cmake/get_apriltag_detection_poseTargetsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/CMakeFiles/Export/share/get_apriltag_detection_pose/cmake/get_apriltag_detection_poseTargetsExport-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake" TYPE FILE FILES "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose/cmake" TYPE FILE FILES
    "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_core/get_apriltag_detection_poseConfig.cmake"
    "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/ament_cmake_core/get_apriltag_detection_poseConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/get_apriltag_detection_pose" TYPE FILE FILES "/opt/moveit_studio/user_ws/src/solution_get_apriltag_detection_pose/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/opt/moveit_studio/user_ws/build/get_apriltag_detection_pose/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
