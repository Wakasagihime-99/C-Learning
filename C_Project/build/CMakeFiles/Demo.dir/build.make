# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\software\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\software\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\c\C_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\c\C_Project\build

# Include any dependencies generated for this target.
include CMakeFiles/Demo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Demo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Demo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Demo.dir/flags.make

CMakeFiles/Demo.dir/hello.c.obj: CMakeFiles/Demo.dir/flags.make
CMakeFiles/Demo.dir/hello.c.obj: D:/code/c/C_Project/hello.c
CMakeFiles/Demo.dir/hello.c.obj: CMakeFiles/Demo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\C_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Demo.dir/hello.c.obj"
	D:\software\x86_64-12.2.0-release-win32-seh-ucrt-rt_v10-rev2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Demo.dir/hello.c.obj -MF CMakeFiles\Demo.dir\hello.c.obj.d -o CMakeFiles\Demo.dir\hello.c.obj -c D:\code\c\C_Project\hello.c

CMakeFiles/Demo.dir/hello.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Demo.dir/hello.c.i"
	D:\software\x86_64-12.2.0-release-win32-seh-ucrt-rt_v10-rev2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\c\C_Project\hello.c > CMakeFiles\Demo.dir\hello.c.i

CMakeFiles/Demo.dir/hello.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Demo.dir/hello.c.s"
	D:\software\x86_64-12.2.0-release-win32-seh-ucrt-rt_v10-rev2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\c\C_Project\hello.c -o CMakeFiles\Demo.dir\hello.c.s

CMakeFiles/Demo.dir/var.c.obj: CMakeFiles/Demo.dir/flags.make
CMakeFiles/Demo.dir/var.c.obj: D:/code/c/C_Project/var.c
CMakeFiles/Demo.dir/var.c.obj: CMakeFiles/Demo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\c\C_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Demo.dir/var.c.obj"
	D:\software\x86_64-12.2.0-release-win32-seh-ucrt-rt_v10-rev2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Demo.dir/var.c.obj -MF CMakeFiles\Demo.dir\var.c.obj.d -o CMakeFiles\Demo.dir\var.c.obj -c D:\code\c\C_Project\var.c

CMakeFiles/Demo.dir/var.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Demo.dir/var.c.i"
	D:\software\x86_64-12.2.0-release-win32-seh-ucrt-rt_v10-rev2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\c\C_Project\var.c > CMakeFiles\Demo.dir\var.c.i

CMakeFiles/Demo.dir/var.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Demo.dir/var.c.s"
	D:\software\x86_64-12.2.0-release-win32-seh-ucrt-rt_v10-rev2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\c\C_Project\var.c -o CMakeFiles\Demo.dir\var.c.s

# Object files for target Demo
Demo_OBJECTS = \
"CMakeFiles/Demo.dir/hello.c.obj" \
"CMakeFiles/Demo.dir/var.c.obj"

# External object files for target Demo
Demo_EXTERNAL_OBJECTS =

Demo.exe: CMakeFiles/Demo.dir/hello.c.obj
Demo.exe: CMakeFiles/Demo.dir/var.c.obj
Demo.exe: CMakeFiles/Demo.dir/build.make
Demo.exe: CMakeFiles/Demo.dir/linkLibs.rsp
Demo.exe: CMakeFiles/Demo.dir/objects1
Demo.exe: CMakeFiles/Demo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\c\C_Project\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Demo.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Demo.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Demo.dir/build: Demo.exe
.PHONY : CMakeFiles/Demo.dir/build

CMakeFiles/Demo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Demo.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Demo.dir/clean

CMakeFiles/Demo.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\c\C_Project D:\code\c\C_Project D:\code\c\C_Project\build D:\code\c\C_Project\build D:\code\c\C_Project\build\CMakeFiles\Demo.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Demo.dir/depend

