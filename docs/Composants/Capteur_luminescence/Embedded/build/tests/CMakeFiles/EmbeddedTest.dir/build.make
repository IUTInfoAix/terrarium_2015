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
CMAKE_SOURCE_DIR = /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/EmbeddedTest.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/EmbeddedTest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/EmbeddedTest.dir/flags.make

tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o: tests/CMakeFiles/EmbeddedTest.dir/flags.make
tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o: ../tests/Embedded/HelloTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o"
	cd /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o -c /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/tests/Embedded/HelloTest.cpp

tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.i"
	cd /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/tests/Embedded/HelloTest.cpp > CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.i

tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.s"
	cd /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/tests/Embedded/HelloTest.cpp -o CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.s

tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.requires:
.PHONY : tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.requires

tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.provides: tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/EmbeddedTest.dir/build.make tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.provides.build
.PHONY : tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.provides

tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.provides.build: tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o

# Object files for target EmbeddedTest
EmbeddedTest_OBJECTS = \
"CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o"

# External object files for target EmbeddedTest
EmbeddedTest_EXTERNAL_OBJECTS =

lib/libEmbeddedTest.a: tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o
lib/libEmbeddedTest.a: tests/CMakeFiles/EmbeddedTest.dir/build.make
lib/libEmbeddedTest.a: tests/CMakeFiles/EmbeddedTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../lib/libEmbeddedTest.a"
	cd /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/EmbeddedTest.dir/cmake_clean_target.cmake
	cd /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EmbeddedTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/EmbeddedTest.dir/build: lib/libEmbeddedTest.a
.PHONY : tests/CMakeFiles/EmbeddedTest.dir/build

tests/CMakeFiles/EmbeddedTest.dir/requires: tests/CMakeFiles/EmbeddedTest.dir/Embedded/HelloTest.cpp.o.requires
.PHONY : tests/CMakeFiles/EmbeddedTest.dir/requires

tests/CMakeFiles/EmbeddedTest.dir/clean:
	cd /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/EmbeddedTest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/EmbeddedTest.dir/clean

tests/CMakeFiles/EmbeddedTest.dir/depend:
	cd /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/tests /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests /home/ahmed/projects/terrarium_2015/docs/Composants/Capteur_luminescence/Embedded/build/tests/CMakeFiles/EmbeddedTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/EmbeddedTest.dir/depend
