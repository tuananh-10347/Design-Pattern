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
CMAKE_SOURCE_DIR = "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/build"

# Include any dependencies generated for this target.
include CMakeFiles/memory.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/memory.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/memory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/memory.dir/flags.make

CMakeFiles/memory.dir/main.cpp.o: CMakeFiles/memory.dir/flags.make
CMakeFiles/memory.dir/main.cpp.o: ../main.cpp
CMakeFiles/memory.dir/main.cpp.o: CMakeFiles/memory.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/memory.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/memory.dir/main.cpp.o -MF CMakeFiles/memory.dir/main.cpp.o.d -o CMakeFiles/memory.dir/main.cpp.o -c "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/main.cpp"

CMakeFiles/memory.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/memory.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/main.cpp" > CMakeFiles/memory.dir/main.cpp.i

CMakeFiles/memory.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/memory.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/main.cpp" -o CMakeFiles/memory.dir/main.cpp.s

# Object files for target memory
memory_OBJECTS = \
"CMakeFiles/memory.dir/main.cpp.o"

# External object files for target memory
memory_EXTERNAL_OBJECTS =

memory: CMakeFiles/memory.dir/main.cpp.o
memory: CMakeFiles/memory.dir/build.make
memory: CMakeFiles/memory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable memory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/memory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/memory.dir/build: memory
.PHONY : CMakeFiles/memory.dir/build

CMakeFiles/memory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/memory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/memory.dir/clean

CMakeFiles/memory.dir/depend:
	cd "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/build" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/build" "/home/rut3hc/Documents/SSH VS CODE/Design-Pattern/SizeOf/build/CMakeFiles/memory.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/memory.dir/depend

