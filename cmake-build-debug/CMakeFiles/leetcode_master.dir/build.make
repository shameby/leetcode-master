# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/randy/code/cpp/leetcode-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/randy/code/cpp/leetcode-master/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leetcode_master.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode_master.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode_master.dir/flags.make

CMakeFiles/leetcode_master.dir/src/main.cpp.o: CMakeFiles/leetcode_master.dir/flags.make
CMakeFiles/leetcode_master.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/randy/code/cpp/leetcode-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/leetcode_master.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/leetcode_master.dir/src/main.cpp.o -c /Users/randy/code/cpp/leetcode-master/src/main.cpp

CMakeFiles/leetcode_master.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/leetcode_master.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/randy/code/cpp/leetcode-master/src/main.cpp > CMakeFiles/leetcode_master.dir/src/main.cpp.i

CMakeFiles/leetcode_master.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/leetcode_master.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/randy/code/cpp/leetcode-master/src/main.cpp -o CMakeFiles/leetcode_master.dir/src/main.cpp.s

# Object files for target leetcode_master
leetcode_master_OBJECTS = \
"CMakeFiles/leetcode_master.dir/src/main.cpp.o"

# External object files for target leetcode_master
leetcode_master_EXTERNAL_OBJECTS =

leetcode_master: CMakeFiles/leetcode_master.dir/src/main.cpp.o
leetcode_master: CMakeFiles/leetcode_master.dir/build.make
leetcode_master: CMakeFiles/leetcode_master.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/randy/code/cpp/leetcode-master/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable leetcode_master"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leetcode_master.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode_master.dir/build: leetcode_master

.PHONY : CMakeFiles/leetcode_master.dir/build

CMakeFiles/leetcode_master.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leetcode_master.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leetcode_master.dir/clean

CMakeFiles/leetcode_master.dir/depend:
	cd /Users/randy/code/cpp/leetcode-master/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/randy/code/cpp/leetcode-master /Users/randy/code/cpp/leetcode-master /Users/randy/code/cpp/leetcode-master/cmake-build-debug /Users/randy/code/cpp/leetcode-master/cmake-build-debug /Users/randy/code/cpp/leetcode-master/cmake-build-debug/CMakeFiles/leetcode_master.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode_master.dir/depend

