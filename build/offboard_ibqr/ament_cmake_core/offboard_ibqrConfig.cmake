# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_offboard_ibqr_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED offboard_ibqr_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(offboard_ibqr_FOUND FALSE)
  elseif(NOT offboard_ibqr_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(offboard_ibqr_FOUND FALSE)
  endif()
  return()
endif()
set(_offboard_ibqr_CONFIG_INCLUDED TRUE)

# output package information
if(NOT offboard_ibqr_FIND_QUIETLY)
  message(STATUS "Found offboard_ibqr: 0.1.0 (${offboard_ibqr_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'offboard_ibqr' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(offboard_ibqr_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${offboard_ibqr_DIR}/${_extra}")
endforeach()
