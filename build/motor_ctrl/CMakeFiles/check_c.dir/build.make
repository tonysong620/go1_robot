# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rs/go1_robot/build/motor_ctrl

# Include any dependencies generated for this target.
include CMakeFiles/check_c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/check_c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/check_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/check_c.dir/flags.make

CMakeFiles/check_c.dir/src/check.c.o: CMakeFiles/check_c.dir/flags.make
CMakeFiles/check_c.dir/src/check.c.o: /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/src/check.c
CMakeFiles/check_c.dir/src/check.c.o: CMakeFiles/check_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rs/go1_robot/build/motor_ctrl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/check_c.dir/src/check.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/check_c.dir/src/check.c.o -MF CMakeFiles/check_c.dir/src/check.c.o.d -o CMakeFiles/check_c.dir/src/check.c.o -c /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/src/check.c

CMakeFiles/check_c.dir/src/check.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/check_c.dir/src/check.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/src/check.c > CMakeFiles/check_c.dir/src/check.c.i

CMakeFiles/check_c.dir/src/check.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/check_c.dir/src/check.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/src/check.c -o CMakeFiles/check_c.dir/src/check.c.s

# Object files for target check_c
check_c_OBJECTS = \
"CMakeFiles/check_c.dir/src/check.c.o"

# External object files for target check_c
check_c_EXTERNAL_OBJECTS =

/home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/bin/check_c: CMakeFiles/check_c.dir/src/check.c.o
/home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/bin/check_c: CMakeFiles/check_c.dir/build.make
/home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/bin/check_c: CMakeFiles/check_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rs/go1_robot/build/motor_ctrl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/bin/check_c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/check_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/check_c.dir/build: /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk/bin/check_c
.PHONY : CMakeFiles/check_c.dir/build

CMakeFiles/check_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/check_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/check_c.dir/clean

CMakeFiles/check_c.dir/depend:
	cd /home/rs/go1_robot/build/motor_ctrl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk /home/rs/go1_robot/src/unitree_guide/unitree_actuator_sdk /home/rs/go1_robot/build/motor_ctrl /home/rs/go1_robot/build/motor_ctrl /home/rs/go1_robot/build/motor_ctrl/CMakeFiles/check_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check_c.dir/depend
