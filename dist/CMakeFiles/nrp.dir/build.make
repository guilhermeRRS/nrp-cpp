# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user\Desktop\NRP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\Desktop\NRP\dist

# Include any dependencies generated for this target.
include CMakeFiles/nrp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/nrp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/nrp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nrp.dir/flags.make

CMakeFiles/nrp.dir/src/main.cpp.obj: CMakeFiles/nrp.dir/flags.make
CMakeFiles/nrp.dir/src/main.cpp.obj: C:/Users/user/Desktop/NRP/src/main.cpp
CMakeFiles/nrp.dir/src/main.cpp.obj: CMakeFiles/nrp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\user\Desktop\NRP\dist\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nrp.dir/src/main.cpp.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/nrp.dir/src/main.cpp.obj -MF CMakeFiles\nrp.dir\src\main.cpp.obj.d -o CMakeFiles\nrp.dir\src\main.cpp.obj -c C:\Users\user\Desktop\NRP\src\main.cpp

CMakeFiles/nrp.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/nrp.dir/src/main.cpp.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\Desktop\NRP\src\main.cpp > CMakeFiles\nrp.dir\src\main.cpp.i

CMakeFiles/nrp.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/nrp.dir/src/main.cpp.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\Desktop\NRP\src\main.cpp -o CMakeFiles\nrp.dir\src\main.cpp.s

# Object files for target nrp
nrp_OBJECTS = \
"CMakeFiles/nrp.dir/src/main.cpp.obj"

# External object files for target nrp
nrp_EXTERNAL_OBJECTS =

nrp.exe: CMakeFiles/nrp.dir/src/main.cpp.obj
nrp.exe: CMakeFiles/nrp.dir/build.make
nrp.exe: CMakeFiles/nrp.dir/linkLibs.rsp
nrp.exe: CMakeFiles/nrp.dir/objects1.rsp
nrp.exe: CMakeFiles/nrp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\user\Desktop\NRP\dist\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nrp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nrp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nrp.dir/build: nrp.exe
.PHONY : CMakeFiles/nrp.dir/build

CMakeFiles/nrp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nrp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nrp.dir/clean

CMakeFiles/nrp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\NRP C:\Users\user\Desktop\NRP C:\Users\user\Desktop\NRP\dist C:\Users\user\Desktop\NRP\dist C:\Users\user\Desktop\NRP\dist\CMakeFiles\nrp.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/nrp.dir/depend

