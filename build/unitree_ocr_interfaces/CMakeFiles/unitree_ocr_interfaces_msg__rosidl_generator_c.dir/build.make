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
CMAKE_SOURCE_DIR = /home/rs/final_auto/src/unitree_inspection/unitree_ocr_interfaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rs/final_auto/build/unitree_ocr_interfaces

# Include any dependencies generated for this target.
include CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/flags.make

rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/lib/rosidl_generator_c/rosidl_generator_c
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_c/__init__.py
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/action__type_support.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__functions.c.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__functions.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__struct.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/idl__type_support.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__functions.c.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__functions.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__struct.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/msg__type_support.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: /opt/ros/humble/share/rosidl_generator_c/resource/srv__type_support.h.em
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: rosidl_adapter/unitree_ocr_interfaces/msg/Detection.idl
rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h: rosidl_adapter/unitree_ocr_interfaces/msg/Detections.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/rs/final_auto/build/unitree_ocr_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating C code for ROS interfaces"
	/usr/bin/python3 /opt/ros/humble/share/rosidl_generator_c/cmake/../../../lib/rosidl_generator_c/rosidl_generator_c --generator-arguments-file /home/rs/final_auto/build/unitree_ocr_interfaces/rosidl_generator_c__arguments.json

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.h: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.h

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__struct.h: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__struct.h

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__type_support.h: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__type_support.h

rosidl_generator_c/unitree_ocr_interfaces/msg/detections.h: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detections.h

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.h: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.h

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__struct.h: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__struct.h

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__type_support.h: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__type_support.h

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c

rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/flags.make
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rs/final_auto/build/unitree_ocr_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o -MF CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o.d -o CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o -c /home/rs/final_auto/build/unitree_ocr_interfaces/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rs/final_auto/build/unitree_ocr_interfaces/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c > CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.i

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rs/final_auto/build/unitree_ocr_interfaces/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c -o CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.s

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/flags.make
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rs/final_auto/build/unitree_ocr_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o -MF CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o.d -o CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o -c /home/rs/final_auto/build/unitree_ocr_interfaces/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rs/final_auto/build/unitree_ocr_interfaces/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c > CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.i

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rs/final_auto/build/unitree_ocr_interfaces/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c -o CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.s

# Object files for target unitree_ocr_interfaces_msg__rosidl_generator_c
unitree_ocr_interfaces_msg__rosidl_generator_c_OBJECTS = \
"CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o" \
"CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o"

# External object files for target unitree_ocr_interfaces_msg__rosidl_generator_c
unitree_ocr_interfaces_msg__rosidl_generator_c_EXTERNAL_OBJECTS =

libunitree_ocr_interfaces__rosidl_generator_c.so: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c.o
libunitree_ocr_interfaces__rosidl_generator_c.so: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c.o
libunitree_ocr_interfaces__rosidl_generator_c.so: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/build.make
libunitree_ocr_interfaces__rosidl_generator_c.so: /opt/ros/humble/lib/librosidl_runtime_c.so
libunitree_ocr_interfaces__rosidl_generator_c.so: /opt/ros/humble/lib/librcutils.so
libunitree_ocr_interfaces__rosidl_generator_c.so: CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rs/final_auto/build/unitree_ocr_interfaces/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C shared library libunitree_ocr_interfaces__rosidl_generator_c.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/build: libunitree_ocr_interfaces__rosidl_generator_c.so
.PHONY : CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/build

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/clean

CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.c
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__functions.h
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__struct.h
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detection__type_support.h
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.c
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__functions.h
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__struct.h
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detail/detections__type_support.h
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detection.h
CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend: rosidl_generator_c/unitree_ocr_interfaces/msg/detections.h
	cd /home/rs/final_auto/build/unitree_ocr_interfaces && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rs/final_auto/src/unitree_inspection/unitree_ocr_interfaces /home/rs/final_auto/src/unitree_inspection/unitree_ocr_interfaces /home/rs/final_auto/build/unitree_ocr_interfaces /home/rs/final_auto/build/unitree_ocr_interfaces /home/rs/final_auto/build/unitree_ocr_interfaces/CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/unitree_ocr_interfaces_msg__rosidl_generator_c.dir/depend

