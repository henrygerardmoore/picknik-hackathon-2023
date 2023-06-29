# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_offset_pose_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED offset_pose_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(offset_pose_FOUND FALSE)
  elseif(NOT offset_pose_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(offset_pose_FOUND FALSE)
  endif()
  return()
endif()
set(_offset_pose_CONFIG_INCLUDED TRUE)

# output package information
if(NOT offset_pose_FIND_QUIETLY)
  message(STATUS "Found offset_pose: 1.0.0 (${offset_pose_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'offset_pose' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${offset_pose_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(offset_pose_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${offset_pose_DIR}/${_extra}")
endforeach()
