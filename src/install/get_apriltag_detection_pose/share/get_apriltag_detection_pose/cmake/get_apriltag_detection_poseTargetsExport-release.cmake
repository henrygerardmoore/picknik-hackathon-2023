#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "get_apriltag_detection_pose::get_apriltag_detection_pose" for configuration "Release"
set_property(TARGET get_apriltag_detection_pose::get_apriltag_detection_pose APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(get_apriltag_detection_pose::get_apriltag_detection_pose PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libget_apriltag_detection_pose.so"
  IMPORTED_SONAME_RELEASE "libget_apriltag_detection_pose.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS get_apriltag_detection_pose::get_apriltag_detection_pose )
list(APPEND _IMPORT_CHECK_FILES_FOR_get_apriltag_detection_pose::get_apriltag_detection_pose "${_IMPORT_PREFIX}/lib/libget_apriltag_detection_pose.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
