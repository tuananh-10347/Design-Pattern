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
CMAKE_SOURCE_DIR = "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/build"

# Include any dependencies generated for this target.
include CMakeFiles/Singleton.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Singleton.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Singleton.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Singleton.dir/flags.make

CMakeFiles/Singleton.dir/main.cpp.o: CMakeFiles/Singleton.dir/flags.make
CMakeFiles/Singleton.dir/main.cpp.o: ../main.cpp
CMakeFiles/Singleton.dir/main.cpp.o: CMakeFiles/Singleton.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Singleton.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Singleton.dir/main.cpp.o -MF CMakeFiles/Singleton.dir/main.cpp.o.d -o CMakeFiles/Singleton.dir/main.cpp.o -c "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/main.cpp"

CMakeFiles/Singleton.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Singleton.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/main.cpp" > CMakeFiles/Singleton.dir/main.cpp.i

CMakeFiles/Singleton.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Singleton.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/main.cpp" -o CMakeFiles/Singleton.dir/main.cpp.s

# Object files for target Singleton
Singleton_OBJECTS = \
"CMakeFiles/Singleton.dir/main.cpp.o"

# External object files for target Singleton
Singleton_EXTERNAL_OBJECTS =

Singleton: CMakeFiles/Singleton.dir/main.cpp.o
Singleton: CMakeFiles/Singleton.dir/build.make
Singleton: CMakeFiles/Singleton.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Singleton"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Singleton.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Singleton.dir/build: Singleton
.PHONY : CMakeFiles/Singleton.dir/build

CMakeFiles/Singleton.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Singleton.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Singleton.dir/clean

CMakeFiles/Singleton.dir/depend:
	cd "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/build" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/build" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/Singleton/Singleton1/build/CMakeFiles/Singleton.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Singleton.dir/depend

