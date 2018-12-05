# generated from catkin/cmake/template/pkgConfig.cmake.in

# append elements to a list if they are not already in the list
# copied from catkin/cmake/list_append_unique.cmake to keep pkgConfig
# self contained
macro(_list_append_unique listname)
  foreach(_item ${ARGN})
    list(FIND ${listname} ${_item} _index)
    if(_index EQUAL -1)
      list(APPEND ${listname} ${_item})
    endif()
  endforeach()
endmacro()

# remove duplicate libraries, generalized from PCLConfig.cmake.in
macro(_remove_duplicate_libraries _unfiltered_libraries _final_filtered_libraries)
  set(_filtered_libraries)
  set(_debug_libraries)
  set(_optimized_libraries)
  set(_other_libraries)
  set(_waiting_for_debug 0)
  set(_waiting_for_optimized 0)
  set(_library_position -1)
  foreach(library ${${_unfiltered_libraries}})
    if("${library}" STREQUAL "debug")
      set(_waiting_for_debug 1)
    elseif("${library}" STREQUAL "optimized")
      set(_waiting_for_optimized 1)
    elseif(_waiting_for_debug)
      list(FIND _debug_libraries "${library}" library_position)
      if(library_position EQUAL -1)
        list(APPEND ${_filtered_libraries} debug ${library})
        list(APPEND _debug_libraries ${library})
      endif()
      set(_waiting_for_debug 0)
    elseif(_waiting_for_optimized)
      list(FIND _optimized_libraries "${library}" library_position)
      if(library_position EQUAL -1)
        list(APPEND ${_filtered_libraries} optimized ${library})
        list(APPEND _optimized_libraries ${library})
      endif()
      set(_waiting_for_optimized 0)
    else("${library}" STREQUAL "debug")
      list(FIND _other_libraries "${library}" library_position)
      if(library_position EQUAL -1)
        list(APPEND ${_filtered_libraries} ${library})
        list(APPEND _other_libraries ${library})
      endif()
    endif("${library}" STREQUAL "debug")
  endforeach(library)
  set(_final_filtered_libraries _filtered_libraries)
endmacro()


if(moveit_msgs_CONFIG_INCLUDED)
  return()
endif()
set(moveit_msgs_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("TRUE" STREQUAL "TRUE")
  set(moveit_msgs_SOURCE_PREFIX /home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_msgs)
  set(moveit_msgs_DEVEL_PREFIX /home/leo/Dropbox/Thesis/Projects/moveitNEW/devel)
  set(moveit_msgs_INSTALL_PREFIX "")
  set(moveit_msgs_PREFIX ${moveit_msgs_DEVEL_PREFIX})
else()
  set(moveit_msgs_SOURCE_PREFIX "")
  set(moveit_msgs_DEVEL_PREFIX "")
  set(moveit_msgs_INSTALL_PREFIX /home/leo/Dropbox/Thesis/Projects/moveitNEW/install)
  set(moveit_msgs_PREFIX ${moveit_msgs_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'moveit_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(moveit_msgs_FOUND_CATKIN_PROJECT TRUE)

if(NOT "/home/leo/Dropbox/Thesis/Projects/moveitNEW/devel/include" STREQUAL "")
  set(moveit_msgs_INCLUDE_DIRS "")
  set(_include_dirs "/home/leo/Dropbox/Thesis/Projects/moveitNEW/devel/include")
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir}" STREQUAL "include")
      get_filename_component(include "${moveit_msgs_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'moveit_msgs' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  Ask the maintainer 'Ioan Sucan <isucan@willowgarage.com>' to fix it.")
      endif()
    else()
      message(FATAL_ERROR "Project 'moveit_msgs' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_msgs/${idir}'.  Ask the maintainer 'Ioan Sucan <isucan@willowgarage.com>' to fix it.")
    endif()
    _list_append_unique(moveit_msgs_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "")
foreach(library ${libraries})
  if(TARGET ${library})
    list(APPEND moveit_msgs_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND moveit_msgs_LIBRARIES ${library})
  else()
    set(lib_path "")
    set(lib "${library}-NOTFOUND")
    # since the path where the library is found is returned we have to iterate over the paths manually
    foreach(path /home/leo/Dropbox/Thesis/Projects/moveitNEW/devel/lib;/home/leo/moveit/devel/lib;/opt/ros/hydro/lib)
      find_library(lib ${library}
        PATHS ${path}
        NO_DEFAULT_PATH NO_CMAKE_FIND_ROOT_PATH)
      if(lib)
        set(lib_path ${path})
        break()
      endif()
    endforeach()
    if(lib)
      _list_append_unique(moveit_msgs_LIBRARY_DIRS ${lib_path})
      list(APPEND moveit_msgs_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'moveit_msgs'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND moveit_msgs_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(moveit_msgs_EXPORTED_TARGETS "moveit_msgs_generate_messages_cpp;moveit_msgs_generate_messages_lisp;moveit_msgs_generate_messages_py")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${moveit_msgs_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "std_msgs;actionlib_msgs;sensor_msgs;geometry_msgs;trajectory_msgs;shape_msgs;object_recognition_msgs;octomap_msgs")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 moveit_msgs_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${moveit_msgs_dep}_FOUND)
      find_package(${moveit_msgs_dep} REQUIRED)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${moveit_msgs_dep} REQUIRED ${depend_list})
  endif()
  _list_append_unique(moveit_msgs_INCLUDE_DIRS ${${moveit_msgs_dep}_INCLUDE_DIRS})
  list(APPEND moveit_msgs_LIBRARIES ${${moveit_msgs_dep}_LIBRARIES})
  _list_append_unique(moveit_msgs_LIBRARY_DIRS ${${moveit_msgs_dep}_LIBRARY_DIRS})
  list(APPEND moveit_msgs_EXPORTED_TARGETS ${${moveit_msgs_dep}_EXPORTED_TARGETS})
endforeach()

if(moveit_msgs_LIBRARIES)
  _remove_duplicate_libraries(moveit_msgs_LIBRARIES moveit_msgs_LIBRARIES)
endif()

set(pkg_cfg_extras "moveit_msgs-msg-extras.cmake")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${moveit_msgs_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
