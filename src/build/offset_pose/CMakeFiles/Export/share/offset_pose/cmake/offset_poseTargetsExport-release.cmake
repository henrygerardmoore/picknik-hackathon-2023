#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "offset_pose::offset_pose" for configuration "Release"
set_property(TARGET offset_pose::offset_pose APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(offset_pose::offset_pose PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liboffset_pose.so"
  IMPORTED_SONAME_RELEASE "liboffset_pose.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS offset_pose::offset_pose )
list(APPEND _IMPORT_CHECK_FILES_FOR_offset_pose::offset_pose "${_IMPORT_PREFIX}/lib/liboffset_pose.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
