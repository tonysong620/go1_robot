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
CMAKE_SOURCE_DIR = /home/yeryn/final/unitree_inspection/unitree_ocr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yeryn/final/build/unitree_ocr

# Include any dependencies generated for this target.
include CMakeFiles/text_detection_subscriber.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/text_detection_subscriber.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/text_detection_subscriber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/text_detection_subscriber.dir/flags.make

CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o: CMakeFiles/text_detection_subscriber.dir/flags.make
CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o: /home/yeryn/final/unitree_inspection/unitree_ocr/src/text_detection_subscriber.cpp
CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o: CMakeFiles/text_detection_subscriber.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeryn/final/build/unitree_ocr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o -MF CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o.d -o CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o -c /home/yeryn/final/unitree_inspection/unitree_ocr/src/text_detection_subscriber.cpp

CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeryn/final/unitree_inspection/unitree_ocr/src/text_detection_subscriber.cpp > CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.i

CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeryn/final/unitree_inspection/unitree_ocr/src/text_detection_subscriber.cpp -o CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.s

# Object files for target text_detection_subscriber
text_detection_subscriber_OBJECTS = \
"CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o"

# External object files for target text_detection_subscriber
text_detection_subscriber_EXTERNAL_OBJECTS =

text_detection_subscriber: CMakeFiles/text_detection_subscriber.dir/src/text_detection_subscriber.cpp.o
text_detection_subscriber: CMakeFiles/text_detection_subscriber.dir/build.make
text_detection_subscriber: /opt/ros/humble/lib/libcv_bridge.so
text_detection_subscriber: /opt/ros/humble/lib/aarch64-linux-gnu/libimage_transport.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces__rosidl_typesupport_cpp.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces_msg__rosidl_generator_py.so
text_detection_subscriber: libunitree_ocr.a
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_generator_py.so
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_generator_py.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_py.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/libsensor_msgs__rosidl_typesupport_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libmessage_filters.so
text_detection_subscriber: /opt/ros/humble/lib/librclcpp.so
text_detection_subscriber: /opt/ros/humble/lib/liblibstatistics_collector.so
text_detection_subscriber: /opt/ros/humble/lib/librcl.so
text_detection_subscriber: /opt/ros/humble/lib/librmw_implementation.so
text_detection_subscriber: /opt/ros/humble/lib/libament_index_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_logging_spdlog.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_logging_interface.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/librcl_yaml_param_parser.so
text_detection_subscriber: /opt/ros/humble/lib/libyaml.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/libtracetools.so
text_detection_subscriber: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
text_detection_subscriber: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/libfastcdr.so.1.0.24
text_detection_subscriber: /opt/ros/humble/lib/librmw.so
text_detection_subscriber: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
text_detection_subscriber: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
text_detection_subscriber: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces__rosidl_typesupport_c.so
text_detection_subscriber: /home/yeryn/final/install/unitree_ocr_interfaces/lib/libunitree_ocr_interfaces__rosidl_generator_c.so
text_detection_subscriber: /opt/ros/humble/lib/librosidl_typesupport_c.so
text_detection_subscriber: /opt/ros/humble/lib/librcpputils.so
text_detection_subscriber: /opt/ros/humble/lib/librosidl_runtime_c.so
text_detection_subscriber: /opt/ros/humble/lib/librcutils.so
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libpython3.10.so
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_stitching.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_alphamat.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_aruco.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_barcode.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_bgsegm.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_bioinspired.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_ccalib.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_dnn_objdetect.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_dnn_superres.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_dpm.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_face.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_freetype.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_fuzzy.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_hdf.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_hfs.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_img_hash.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_intensity_transform.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_line_descriptor.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_mcc.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_quality.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_rapid.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_reg.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_rgbd.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_saliency.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_shape.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_stereo.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_structured_light.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_phase_unwrapping.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_superres.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_optflow.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_surface_matching.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_tracking.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_highgui.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_datasets.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_plot.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_text.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_ml.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_videostab.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_videoio.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_viz.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_wechat_qrcode.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_ximgproc.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_video.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_xobjdetect.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_objdetect.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_calib3d.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_dnn.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_features2d.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_flann.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_xphoto.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_photo.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.4.5.4d
text_detection_subscriber: /usr/lib/aarch64-linux-gnu/libopencv_core.so.4.5.4d
text_detection_subscriber: CMakeFiles/text_detection_subscriber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yeryn/final/build/unitree_ocr/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable text_detection_subscriber"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/text_detection_subscriber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/text_detection_subscriber.dir/build: text_detection_subscriber
.PHONY : CMakeFiles/text_detection_subscriber.dir/build

CMakeFiles/text_detection_subscriber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/text_detection_subscriber.dir/cmake_clean.cmake
.PHONY : CMakeFiles/text_detection_subscriber.dir/clean

CMakeFiles/text_detection_subscriber.dir/depend:
	cd /home/yeryn/final/build/unitree_ocr && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yeryn/final/unitree_inspection/unitree_ocr /home/yeryn/final/unitree_inspection/unitree_ocr /home/yeryn/final/build/unitree_ocr /home/yeryn/final/build/unitree_ocr /home/yeryn/final/build/unitree_ocr/CMakeFiles/text_detection_subscriber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/text_detection_subscriber.dir/depend

