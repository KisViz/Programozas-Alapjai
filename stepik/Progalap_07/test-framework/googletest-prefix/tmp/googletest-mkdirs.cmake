# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-src"
  "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-build"
  "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix"
  "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/tmp"
  "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp"
  "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src"
  "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Albert/CLionProjects/Progalap_07/test-framework/googletest-prefix/src/googletest-stamp${cfgdir}") # cfgdir has leading slash
endif()
