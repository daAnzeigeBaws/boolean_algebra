# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Phillip.Goellner\CLionProjects\boolean_algebra_new

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Phillip.Goellner\CLionProjects\boolean_algebra_new

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	"C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E echo "No interactive CMake dialog available."
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files (x86)\JetBrains\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\Phillip.Goellner\CLionProjects\boolean_algebra_new\CMakeFiles C:\Users\Phillip.Goellner\CLionProjects\boolean_algebra_new\CMakeFiles\progress.marks
	$(MAKE) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\Phillip.Goellner\CLionProjects\boolean_algebra_new\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named boolean_algebra_new

# Build rule for target.
boolean_algebra_new: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 boolean_algebra_new
.PHONY : boolean_algebra_new

# fast build rule for target.
boolean_algebra_new/fast:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/build
.PHONY : boolean_algebra_new/fast

src/And.obj: src/And.cpp.obj

.PHONY : src/And.obj

# target to build an object file
src/And.cpp.obj:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/And.cpp.obj
.PHONY : src/And.cpp.obj

src/And.i: src/And.cpp.i

.PHONY : src/And.i

# target to preprocess a source file
src/And.cpp.i:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/And.cpp.i
.PHONY : src/And.cpp.i

src/And.s: src/And.cpp.s

.PHONY : src/And.s

# target to generate assembly for a file
src/And.cpp.s:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/And.cpp.s
.PHONY : src/And.cpp.s

src/Not.obj: src/Not.cpp.obj

.PHONY : src/Not.obj

# target to build an object file
src/Not.cpp.obj:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Not.cpp.obj
.PHONY : src/Not.cpp.obj

src/Not.i: src/Not.cpp.i

.PHONY : src/Not.i

# target to preprocess a source file
src/Not.cpp.i:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Not.cpp.i
.PHONY : src/Not.cpp.i

src/Not.s: src/Not.cpp.s

.PHONY : src/Not.s

# target to generate assembly for a file
src/Not.cpp.s:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Not.cpp.s
.PHONY : src/Not.cpp.s

src/Or.obj: src/Or.cpp.obj

.PHONY : src/Or.obj

# target to build an object file
src/Or.cpp.obj:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Or.cpp.obj
.PHONY : src/Or.cpp.obj

src/Or.i: src/Or.cpp.i

.PHONY : src/Or.i

# target to preprocess a source file
src/Or.cpp.i:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Or.cpp.i
.PHONY : src/Or.cpp.i

src/Or.s: src/Or.cpp.s

.PHONY : src/Or.s

# target to generate assembly for a file
src/Or.cpp.s:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Or.cpp.s
.PHONY : src/Or.cpp.s

src/Parse_bool.obj: src/Parse_bool.cpp.obj

.PHONY : src/Parse_bool.obj

# target to build an object file
src/Parse_bool.cpp.obj:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Parse_bool.cpp.obj
.PHONY : src/Parse_bool.cpp.obj

src/Parse_bool.i: src/Parse_bool.cpp.i

.PHONY : src/Parse_bool.i

# target to preprocess a source file
src/Parse_bool.cpp.i:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Parse_bool.cpp.i
.PHONY : src/Parse_bool.cpp.i

src/Parse_bool.s: src/Parse_bool.cpp.s

.PHONY : src/Parse_bool.s

# target to generate assembly for a file
src/Parse_bool.cpp.s:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Parse_bool.cpp.s
.PHONY : src/Parse_bool.cpp.s

src/Term_Object.obj: src/Term_Object.cpp.obj

.PHONY : src/Term_Object.obj

# target to build an object file
src/Term_Object.cpp.obj:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Term_Object.cpp.obj
.PHONY : src/Term_Object.cpp.obj

src/Term_Object.i: src/Term_Object.cpp.i

.PHONY : src/Term_Object.i

# target to preprocess a source file
src/Term_Object.cpp.i:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Term_Object.cpp.i
.PHONY : src/Term_Object.cpp.i

src/Term_Object.s: src/Term_Object.cpp.s

.PHONY : src/Term_Object.s

# target to generate assembly for a file
src/Term_Object.cpp.s:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Term_Object.cpp.s
.PHONY : src/Term_Object.cpp.s

src/Variable.obj: src/Variable.cpp.obj

.PHONY : src/Variable.obj

# target to build an object file
src/Variable.cpp.obj:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Variable.cpp.obj
.PHONY : src/Variable.cpp.obj

src/Variable.i: src/Variable.cpp.i

.PHONY : src/Variable.i

# target to preprocess a source file
src/Variable.cpp.i:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Variable.cpp.i
.PHONY : src/Variable.cpp.i

src/Variable.s: src/Variable.cpp.s

.PHONY : src/Variable.s

# target to generate assembly for a file
src/Variable.cpp.s:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/Variable.cpp.s
.PHONY : src/Variable.cpp.s

src/main.obj: src/main.cpp.obj

.PHONY : src/main.obj

# target to build an object file
src/main.cpp.obj:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/main.cpp.obj
.PHONY : src/main.cpp.obj

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles\boolean_algebra_new.dir\build.make CMakeFiles/boolean_algebra_new.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... boolean_algebra_new
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... src/And.obj
	@echo ... src/And.i
	@echo ... src/And.s
	@echo ... src/Not.obj
	@echo ... src/Not.i
	@echo ... src/Not.s
	@echo ... src/Or.obj
	@echo ... src/Or.i
	@echo ... src/Or.s
	@echo ... src/Parse_bool.obj
	@echo ... src/Parse_bool.i
	@echo ... src/Parse_bool.s
	@echo ... src/Term_Object.obj
	@echo ... src/Term_Object.i
	@echo ... src/Term_Object.s
	@echo ... src/Variable.obj
	@echo ... src/Variable.i
	@echo ... src/Variable.s
	@echo ... src/main.obj
	@echo ... src/main.i
	@echo ... src/main.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

