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
CMAKE_SOURCE_DIR = /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/FirstBloodTest.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/FirstBloodTest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/FirstBloodTest.dir/flags.make

tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o: tests/CMakeFiles/FirstBloodTest.dir/flags.make
tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o: ../tests/FirstBlood/FirstBloodTest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o"
	cd /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o -c /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/tests/FirstBlood/FirstBloodTest.cpp

tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.i"
	cd /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/tests/FirstBlood/FirstBloodTest.cpp > CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.i

tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.s"
	cd /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/tests/FirstBlood/FirstBloodTest.cpp -o CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.s

tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.requires:
.PHONY : tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.requires

tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.provides: tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/FirstBloodTest.dir/build.make tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.provides.build
.PHONY : tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.provides

tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.provides.build: tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o

# Object files for target FirstBloodTest
FirstBloodTest_OBJECTS = \
"CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o"

# External object files for target FirstBloodTest
FirstBloodTest_EXTERNAL_OBJECTS =

lib/libFirstBloodTest.a: tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o
lib/libFirstBloodTest.a: tests/CMakeFiles/FirstBloodTest.dir/build.make
lib/libFirstBloodTest.a: tests/CMakeFiles/FirstBloodTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../lib/libFirstBloodTest.a"
	cd /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/FirstBloodTest.dir/cmake_clean_target.cmake
	cd /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FirstBloodTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/FirstBloodTest.dir/build: lib/libFirstBloodTest.a
.PHONY : tests/CMakeFiles/FirstBloodTest.dir/build

tests/CMakeFiles/FirstBloodTest.dir/requires: tests/CMakeFiles/FirstBloodTest.dir/FirstBlood/FirstBloodTest.cpp.o.requires
.PHONY : tests/CMakeFiles/FirstBloodTest.dir/requires

tests/CMakeFiles/FirstBloodTest.dir/clean:
	cd /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/FirstBloodTest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/FirstBloodTest.dir/clean

tests/CMakeFiles/FirstBloodTest.dir/depend:
	cd /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/tests /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests /home/jordan/git/terrarium_2015/apps/terrarium/Groupe_F/FirstBlood/build/tests/CMakeFiles/FirstBloodTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/FirstBloodTest.dir/depend

