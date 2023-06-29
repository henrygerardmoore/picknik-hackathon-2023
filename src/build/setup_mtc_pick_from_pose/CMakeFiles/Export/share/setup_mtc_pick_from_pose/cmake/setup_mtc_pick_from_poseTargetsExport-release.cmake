#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "setup_mtc_pick_from_pose::setup_mtc_pick_from_pose" for configuration "Release"
set_property(TARGET setup_mtc_pick_from_pose::setup_mtc_pick_from_pose APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(setup_mtc_pick_from_pose::setup_mtc_pick_from_pose PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libsetup_mtc_pick_from_pose.so"
  IMPORTED_SONAME_RELEASE "libsetup_mtc_pick_from_pose.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS setup_mtc_pick_from_pose::setup_mtc_pick_from_pose )
list(APPEND _IMPORT_CHECK_FILES_FOR_setup_mtc_pick_from_pose::setup_mtc_pick_from_pose "${_IMPORT_PREFIX}/lib/libsetup_mtc_pick_from_pose.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
