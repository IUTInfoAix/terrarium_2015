# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/jordan/Documents/iut/git/PotterC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jordan/Documents/iut/git/PotterC

# Include any dependencies generated for this target.
include src/CMakeFiles/Potter.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Potter.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Potter.dir/flags.make

src/CMakeFiles/Potter.dir/Potter/Potter.c.o: src/CMakeFiles/Potter.dir/flags.make
src/CMakeFiles/Potter.dir/Potter/Potter.c.o: src/Potter/Potter.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jordan/Documents/iut/git/PotterC/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/CMakeFiles/Potter.dir/Potter/Potter.c.o"
	cd /home/jordan/Documents/iut/git/PotterC/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/Potter.dir/Potter/Potter.c.o   -c /home/jordan/Documents/iut/git/PotterC/src/Potter/Potter.c

src/CMakeFiles/Potter.dir/Potter/Potter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Potter.dir/Potter/Potter.c.i"
	cd /home/jordan/Documents/iut/git/PotterC/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/jordan/Documents/iut/git/PotterC/src/Potter/Potter.c > CMakeFiles/Potter.dir/Potter/Potter.c.i

src/CMakeFiles/Potter.dir/Potter/Potter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Potter.dir/Potter/Potter.c.s"
	cd /home/jordan/Documents/iut/git/PotterC/src && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/jordan/Documents/iut/git/PotterC/src/Potter/Potter.c -o CMakeFiles/Potter.dir/Potter/Potter.c.s

src/CMakeFiles/Potter.dir/Potter/Potter.c.o.requires:
.PHONY : src/CMakeFiles/Potter.dir/Potter/Potter.c.o.requires

src/CMakeFiles/Potter.dir/Potter/Potter.c.o.provides: src/CMakeFiles/Potter.dir/Potter/Potter.c.o.requires
	$(MAKE) -f src/CMakeFiles/Potter.dir/build.make src/CMakeFiles/Potter.dir/Potter/Potter.c.o.provides.build
.PHONY : src/CMakeFiles/Potter.dir/Potter/Potter.c.o.provides

src/CMakeFiles/Potter.dir/Potter/Potter.c.o.provides.build: src/CMakeFiles/Potter.dir/Potter/Potter.c.o

# Object files for target Potter
Potter_OBJECTS = \
"CMakeFiles/Potter.dir/Potter/Potter.c.o"

# External object files for target Potter
Potter_EXTERNAL_OBJECTS =

lib/libPotter.a: src/CMakeFiles/Potter.dir/Potter/Potter.c.o
lib/libPotter.a: src/CMakeFiles/Potter.dir/build.make
lib/libPotter.a: src/CMakeFiles/Potter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library ../lib/libPotter.a"
	cd /home/jordan/Documents/iut/git/PotterC/src && $(CMAKE_COMMAND) -P CMakeFiles/Potter.dir/cmake_clean_target.cmake
	cd /home/jordan/Documents/iut/git/PotterC/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Potter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Potter.dir/build: lib/libPotter.a
.PHONY : src/CMakeFiles/Potter.dir/build

src/CMakeFiles/Potter.dir/requires: src/CMakeFiles/Potter.dir/Potter/Potter.c.o.requires
.PHONY : src/CMakeFiles/Potter.dir/requires

src/CMakeFiles/Potter.dir/clean:
	cd /home/jordan/Documents/iut/git/PotterC/src && $(CMAKE_COMMAND) -P CMakeFiles/Potter.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Potter.dir/clean

src/CMakeFiles/Potter.dir/depend:
	cd /home/jordan/Documents/iut/git/PotterC && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jordan/Documents/iut/git/PotterC /home/jordan/Documents/iut/git/PotterC/src /home/jordan/Documents/iut/git/PotterC /home/jordan/Documents/iut/git/PotterC/src /home/jordan/Documents/iut/git/PotterC/src/CMakeFiles/Potter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Potter.dir/depend

