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
CMAKE_COMMAND = /home/local/bin/cmake

# The command to remove a file.
RM = /home/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /home/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chris/openjpeg-2.0.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chris/openjpeg-2.0.0

# Include any dependencies generated for this target.
include src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/depend.make

# Include the progress variables for this target.
include src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/flags.make

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o: src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/flags.make
src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o: src/lib/openjp2/t1_generate_luts.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/chris/openjpeg-2.0.0/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o"
	cd /home/chris/openjpeg-2.0.0/src/lib/openjp2 && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o   -c /home/chris/openjpeg-2.0.0/src/lib/openjp2/t1_generate_luts.c

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.i"
	cd /home/chris/openjpeg-2.0.0/src/lib/openjp2 && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/chris/openjpeg-2.0.0/src/lib/openjp2/t1_generate_luts.c > CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.i

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.s"
	cd /home/chris/openjpeg-2.0.0/src/lib/openjp2 && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/chris/openjpeg-2.0.0/src/lib/openjp2/t1_generate_luts.c -o CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.s

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.requires:
.PHONY : src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.requires

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.provides: src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.requires
	$(MAKE) -f src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/build.make src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.provides.build
.PHONY : src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.provides

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.provides.build: src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o

# Object files for target t1_generate_luts
t1_generate_luts_OBJECTS = \
"CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o"

# External object files for target t1_generate_luts
t1_generate_luts_EXTERNAL_OBJECTS =

bin/t1_generate_luts: src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o
bin/t1_generate_luts: src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/build.make
bin/t1_generate_luts: src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ../../../bin/t1_generate_luts"
	cd /home/chris/openjpeg-2.0.0/src/lib/openjp2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/t1_generate_luts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/build: bin/t1_generate_luts
.PHONY : src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/build

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/requires: src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/t1_generate_luts.c.o.requires
.PHONY : src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/requires

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/clean:
	cd /home/chris/openjpeg-2.0.0/src/lib/openjp2 && $(CMAKE_COMMAND) -P CMakeFiles/t1_generate_luts.dir/cmake_clean.cmake
.PHONY : src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/clean

src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/depend:
	cd /home/chris/openjpeg-2.0.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chris/openjpeg-2.0.0 /home/chris/openjpeg-2.0.0/src/lib/openjp2 /home/chris/openjpeg-2.0.0 /home/chris/openjpeg-2.0.0/src/lib/openjp2 /home/chris/openjpeg-2.0.0/src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lib/openjp2/CMakeFiles/t1_generate_luts.dir/depend

