# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/build

# Include any dependencies generated for this target.
include CMakeFiles/Factory.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Factory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Factory.dir/flags.make

CMakeFiles/Factory.dir/main.cpp.o: CMakeFiles/Factory.dir/flags.make
CMakeFiles/Factory.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Factory.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Factory.dir/main.cpp.o -c /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/main.cpp

CMakeFiles/Factory.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Factory.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/main.cpp > CMakeFiles/Factory.dir/main.cpp.i

CMakeFiles/Factory.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Factory.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/main.cpp -o CMakeFiles/Factory.dir/main.cpp.s

CMakeFiles/Factory.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Factory.dir/main.cpp.o.requires

CMakeFiles/Factory.dir/main.cpp.o.provides: CMakeFiles/Factory.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Factory.dir/build.make CMakeFiles/Factory.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Factory.dir/main.cpp.o.provides

CMakeFiles/Factory.dir/main.cpp.o.provides.build: CMakeFiles/Factory.dir/main.cpp.o


# Object files for target Factory
Factory_OBJECTS = \
"CMakeFiles/Factory.dir/main.cpp.o"

# External object files for target Factory
Factory_EXTERNAL_OBJECTS =

Factory: CMakeFiles/Factory.dir/main.cpp.o
Factory: CMakeFiles/Factory.dir/build.make
Factory: CMakeFiles/Factory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Factory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Factory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Factory.dir/build: Factory

.PHONY : CMakeFiles/Factory.dir/build

CMakeFiles/Factory.dir/requires: CMakeFiles/Factory.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Factory.dir/requires

CMakeFiles/Factory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Factory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Factory.dir/clean

CMakeFiles/Factory.dir/depend:
	cd /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1 /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1 /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/build /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/build /home/tuan/Documents/code/Design-Pattern/Bridge/Bridge1/build/CMakeFiles/Factory.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Factory.dir/depend

