# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /home/erabbit/Programs/clion-2020.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/erabbit/Programs/clion-2020.1.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/erabbit/CLionProjects/TravelingSalesmanProblem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/erabbit/CLionProjects/TravelingSalesmanProblem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TravelingSalesmanProblem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TravelingSalesmanProblem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TravelingSalesmanProblem.dir/flags.make

CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.o: CMakeFiles/TravelingSalesmanProblem.dir/flags.make
CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/erabbit/CLionProjects/TravelingSalesmanProblem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.o -c /home/erabbit/CLionProjects/TravelingSalesmanProblem/main.cpp

CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erabbit/CLionProjects/TravelingSalesmanProblem/main.cpp > CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.i

CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erabbit/CLionProjects/TravelingSalesmanProblem/main.cpp -o CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.s

# Object files for target TravelingSalesmanProblem
TravelingSalesmanProblem_OBJECTS = \
"CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.o"

# External object files for target TravelingSalesmanProblem
TravelingSalesmanProblem_EXTERNAL_OBJECTS =

TravelingSalesmanProblem: CMakeFiles/TravelingSalesmanProblem.dir/main.cpp.o
TravelingSalesmanProblem: CMakeFiles/TravelingSalesmanProblem.dir/build.make
TravelingSalesmanProblem: CMakeFiles/TravelingSalesmanProblem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/erabbit/CLionProjects/TravelingSalesmanProblem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TravelingSalesmanProblem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TravelingSalesmanProblem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TravelingSalesmanProblem.dir/build: TravelingSalesmanProblem

.PHONY : CMakeFiles/TravelingSalesmanProblem.dir/build

CMakeFiles/TravelingSalesmanProblem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TravelingSalesmanProblem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TravelingSalesmanProblem.dir/clean

CMakeFiles/TravelingSalesmanProblem.dir/depend:
	cd /home/erabbit/CLionProjects/TravelingSalesmanProblem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erabbit/CLionProjects/TravelingSalesmanProblem /home/erabbit/CLionProjects/TravelingSalesmanProblem /home/erabbit/CLionProjects/TravelingSalesmanProblem/cmake-build-debug /home/erabbit/CLionProjects/TravelingSalesmanProblem/cmake-build-debug /home/erabbit/CLionProjects/TravelingSalesmanProblem/cmake-build-debug/CMakeFiles/TravelingSalesmanProblem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TravelingSalesmanProblem.dir/depend
