#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "apriltag_ros_msgs::apriltag_ros_msgs__rosidl_generator_py" for configuration "Release"
set_property(TARGET apriltag_ros_msgs::apriltag_ros_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(apriltag_ros_msgs::apriltag_ros_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libapriltag_ros_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_RELEASE "libapriltag_ros_msgs__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS apriltag_ros_msgs::apriltag_ros_msgs__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_apriltag_ros_msgs::apriltag_ros_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libapriltag_ros_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
