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


if(moveit_core_CONFIG_INCLUDED)
  return()
endif()
set(moveit_core_CONFIG_INCLUDED TRUE)

# set variables for source/devel/install prefixes
if("TRUE" STREQUAL "TRUE")
  set(moveit_core_SOURCE_PREFIX /home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core)
  set(moveit_core_DEVEL_PREFIX /home/leo/Dropbox/Thesis/Projects/moveitNEW/devel)
  set(moveit_core_INSTALL_PREFIX "")
  set(moveit_core_PREFIX ${moveit_core_DEVEL_PREFIX})
else()
  set(moveit_core_SOURCE_PREFIX "")
  set(moveit_core_DEVEL_PREFIX "")
  set(moveit_core_INSTALL_PREFIX /home/leo/Dropbox/Thesis/Projects/moveitNEW/install)
  set(moveit_core_PREFIX ${moveit_core_INSTALL_PREFIX})
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "WARNING: package 'moveit_core' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message("${_msg}")
endif()

# flag project as catkin-based to distinguish if a find_package()-ed project is a catkin project
set(moveit_core_FOUND_CATKIN_PROJECT TRUE)

if(NOT "/home/leo/Dropbox/Thesis/Projects/moveitNEW/build/moveit_core/version;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/background_processing/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/exceptions/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/backtrace/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/collision_detection/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/collision_detection_fcl/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/constraint_samplers/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/controller_manager/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/distance_field/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/dynamics_solver/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/kinematics_base/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/kinematics_metrics/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/robot_model/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/transforms/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/robot_state/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/robot_trajectory/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/kinematic_constraints/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/macros/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/planning_interface/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/planning_request_adapter/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/planning_scene/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/profiler/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/sensor_manager/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/trajectory_processing/include;/opt/ros/hydro/include;/usr/include;/usr/include/eigen3;/opt/ros/hydro/include;/opt/ros/hydro/include;/opt/ros/hydro/include;/opt/ros/hydro/include;/opt/ros/hydro/include" STREQUAL "")
  set(moveit_core_INCLUDE_DIRS "")
  set(_include_dirs "/home/leo/Dropbox/Thesis/Projects/moveitNEW/build/moveit_core/version;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/background_processing/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/exceptions/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/backtrace/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/collision_detection/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/collision_detection_fcl/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/constraint_samplers/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/controller_manager/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/distance_field/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/dynamics_solver/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/kinematics_base/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/kinematics_metrics/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/robot_model/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/transforms/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/robot_state/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/robot_trajectory/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/kinematic_constraints/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/macros/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/planning_interface/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/planning_request_adapter/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/planning_scene/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/profiler/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/sensor_manager/include;/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/trajectory_processing/include;/opt/ros/hydro/include;/usr/include;/usr/include/eigen3;/opt/ros/hydro/include;/opt/ros/hydro/include;/opt/ros/hydro/include;/opt/ros/hydro/include;/opt/ros/hydro/include")
  foreach(idir ${_include_dirs})
    if(IS_ABSOLUTE ${idir} AND IS_DIRECTORY ${idir})
      set(include ${idir})
    elseif("${idir}" STREQUAL "include")
      get_filename_component(include "${moveit_core_DIR}/../../../include" ABSOLUTE)
      if(NOT IS_DIRECTORY ${include})
        message(FATAL_ERROR "Project 'moveit_core' specifies '${idir}' as an include dir, which is not found.  It does not exist in '${include}'.  Ask the maintainer 'Ioan Sucan <isucan@willowgarage.com>' to fix it.")
      endif()
    else()
      message(FATAL_ERROR "Project 'moveit_core' specifies '${idir}' as an include dir, which is not found.  It does neither exist as an absolute directory nor in '/home/leo/Dropbox/Thesis/Projects/moveitNEW/src/moveit_core/${idir}'.  Ask the maintainer 'Ioan Sucan <isucan@willowgarage.com>' to fix it.")
    endif()
    _list_append_unique(moveit_core_INCLUDE_DIRS ${include})
  endforeach()
endif()

set(libraries "moveit_exceptions;moveit_background_processing;moveit_kinematics_base;moveit_robot_model;moveit_transforms;moveit_robot_state;moveit_robot_trajectory;moveit_planning_interface;moveit_collision_detection;moveit_collision_detection_fcl;moveit_kinematic_constraints;moveit_planning_scene;moveit_constraint_samplers;moveit_planning_request_adapter;moveit_profiler;moveit_trajectory_processing;moveit_distance_field;moveit_kinematics_metrics;moveit_dynamics_solver;/opt/ros/hydro/lib/liboctomap.so;/opt/ros/hydro/lib/liboctomath.so;/usr/lib/libboost_system-mt.so;/usr/lib/libboost_filesystem-mt.so;/usr/lib/libboost_date_time-mt.so;/usr/lib/libboost_thread-mt.so;pthread;/usr/lib/libboost_iostreams-mt.so;/opt/ros/hydro/lib/liburdfdom_sensor.so;/opt/ros/hydro/lib/liburdfdom_model_state.so;/opt/ros/hydro/lib/liburdfdom_model.so;/opt/ros/hydro/lib/liburdfdom_world.so;/opt/ros/hydro/lib/libconsole_bridge.so;/opt/ros/hydro/lib/libconsole_bridge.so")
foreach(library ${libraries})
  if(TARGET ${library})
    list(APPEND moveit_core_LIBRARIES ${library})
  elseif(IS_ABSOLUTE ${library})
    list(APPEND moveit_core_LIBRARIES ${library})
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
      _list_append_unique(moveit_core_LIBRARY_DIRS ${lib_path})
      list(APPEND moveit_core_LIBRARIES ${lib})
    else()
      # as a fall back for non-catkin libraries try to search globally
      find_library(lib ${library})
      if(NOT lib)
        message(FATAL_ERROR "Project '${PROJECT_NAME}' tried to find library '${library}'.  The library is neither a target nor built/installed properly.  Did you compile project 'moveit_core'?  Did you find_package() it before the subdirectory containing its code is included?")
      endif()
      list(APPEND moveit_core_LIBRARIES ${lib})
    endif()
  endif()
endforeach()

set(moveit_core_EXPORTED_TARGETS "")
# create dummy targets for exported code generation targets to make life of users easier
foreach(t ${moveit_core_EXPORTED_TARGETS})
  if(NOT TARGET ${t})
    add_custom_target(${t})
  endif()
endforeach()

set(depends "geometric_shapes;shape_tools;eigen_stl_containers;eigen_conversions;random_numbers;moveit_msgs;kdl_parser;srdfdom")
foreach(depend ${depends})
  string(REPLACE " " ";" depend_list ${depend})
  # the package name of the dependency must be kept in a unique variable so that it is not overwritten in recursive calls
  list(GET depend_list 0 moveit_core_dep)
  list(LENGTH depend_list count)
  if(${count} EQUAL 1)
    # simple dependencies must only be find_package()-ed once
    if(NOT ${moveit_core_dep}_FOUND)
      find_package(${moveit_core_dep} REQUIRED)
    endif()
  else()
    # dependencies with components must be find_package()-ed again
    list(REMOVE_AT depend_list 0)
    find_package(${moveit_core_dep} REQUIRED ${depend_list})
  endif()
  _list_append_unique(moveit_core_INCLUDE_DIRS ${${moveit_core_dep}_INCLUDE_DIRS})
  list(APPEND moveit_core_LIBRARIES ${${moveit_core_dep}_LIBRARIES})
  _list_append_unique(moveit_core_LIBRARY_DIRS ${${moveit_core_dep}_LIBRARY_DIRS})
  list(APPEND moveit_core_EXPORTED_TARGETS ${${moveit_core_dep}_EXPORTED_TARGETS})
endforeach()

if(moveit_core_LIBRARIES)
  _remove_duplicate_libraries(moveit_core_LIBRARIES moveit_core_LIBRARIES)
endif()

set(pkg_cfg_extras "")
foreach(extra ${pkg_cfg_extras})
  if(NOT IS_ABSOLUTE ${extra})
    set(extra ${moveit_core_DIR}/${extra})
  endif()
  include(${extra})
endforeach()
