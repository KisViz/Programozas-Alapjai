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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Albert\CLionProjects\Progalap_07\test-framework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Albert\CLionProjects\Progalap_07\test-framework

# Utility rule file for googletest.

# Include any custom commands dependencies for this target.
include CMakeFiles/googletest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/googletest.dir/progress.make

CMakeFiles/googletest: CMakeFiles/googletest-complete

CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-install
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-mkdir
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-download
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-update
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-patch
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-configure
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-build
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-install
CMakeFiles/googletest-complete: googletest-prefix/src/googletest-stamp/googletest-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'googletest'"
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E make_directory C:/Users/Albert/CLionProjects/Progalap_07/test-framework/CMakeFiles
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/CMakeFiles/googletest-complete
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-done

googletest-prefix/src/googletest-stamp/googletest-build: googletest-prefix/src/googletest-stamp/googletest-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'googletest'"
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E echo_append
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-build

googletest-prefix/src/googletest-stamp/googletest-configure: googletest-prefix/tmp/googletest-cfgcmd.txt
googletest-prefix/src/googletest-stamp/googletest-configure: googletest-prefix/src/googletest-stamp/googletest-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'googletest'"
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E echo_append
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-configure

googletest-prefix/src/googletest-stamp/googletest-download: googletest-prefix/src/googletest-stamp/googletest-gitinfo.txt
googletest-prefix/src/googletest-stamp/googletest-download: googletest-prefix/src/googletest-stamp/googletest-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'googletest'"
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -P C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/tmp/googletest-gitclone.cmake
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-download

googletest-prefix/src/googletest-stamp/googletest-install: googletest-prefix/src/googletest-stamp/googletest-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'googletest'"
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E echo_append
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-install

googletest-prefix/src/googletest-stamp/googletest-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'googletest'"
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -Dcfgdir= -P C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/tmp/googletest-mkdirs.cmake
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-mkdir

googletest-prefix/src/googletest-stamp/googletest-patch: googletest-prefix/src/googletest-stamp/googletest-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'googletest'"
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E echo_append
	"C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-patch

googletest-prefix/src/googletest-stamp/googletest-test: googletest-prefix/src/googletest-stamp/googletest-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'googletest'"
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E echo_append
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-build && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -E touch C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/googletest-test

googletest-prefix/src/googletest-stamp/googletest-update: googletest-prefix/src/googletest-stamp/googletest-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'googletest'"
	cd /d C:\Users\Albert\CLionProjects\Progalap_07\test-framework\googletest-src && "C:\Program Files\JetBrains\CLion 2023.1.5\bin\cmake\win\x64\bin\cmake.exe" -P C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/tmp/googletest-gitupdate.cmake

googletest: CMakeFiles/googletest
googletest: CMakeFiles/googletest-complete
googletest: googletest-prefix/src/googletest-stamp/googletest-build
googletest: googletest-prefix/src/googletest-stamp/googletest-configure
googletest: googletest-prefix/src/googletest-stamp/googletest-download
googletest: googletest-prefix/src/googletest-stamp/googletest-install
googletest: googletest-prefix/src/googletest-stamp/googletest-mkdir
googletest: googletest-prefix/src/googletest-stamp/googletest-patch
googletest: googletest-prefix/src/googletest-stamp/googletest-test
googletest: googletest-prefix/src/googletest-stamp/googletest-update
googletest: CMakeFiles/googletest.dir/build.make
.PHONY : googletest

# Rule to build all files generated by this target.
CMakeFiles/googletest.dir/build: googletest
.PHONY : CMakeFiles/googletest.dir/build

CMakeFiles/googletest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\googletest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/googletest.dir/clean

CMakeFiles/googletest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Albert\CLionProjects\Progalap_07\test-framework C:\Users\Albert\CLionProjects\Progalap_07\test-framework C:\Users\Albert\CLionProjects\Progalap_07\test-framework C:\Users\Albert\CLionProjects\Progalap_07\test-framework C:\Users\Albert\CLionProjects\Progalap_07\test-framework\CMakeFiles\googletest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/googletest.dir/depend

