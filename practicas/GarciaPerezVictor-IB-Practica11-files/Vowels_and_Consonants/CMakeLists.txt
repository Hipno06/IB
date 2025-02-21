# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Víctor García Pérez
# @date dic 05, 2024
# @brief CMakeLists.txt
# CMakeLists.txt defines the whole build
# CMake reads CMakeLists.txt sequentially
#
# Build process:
#   1. cd <project_folder>
#   2. mkdir build
#   3. cd build
#   4. cmake ..
#   5. make

cmake_minimum_required(VERSION 3.28.3)  # Mandatory

# set the project name 
project(vowels-and-consonants                # Mandatory
  VERSION 1.0
  DESCRIPTION "Descripción del proyecto"
  LANGUAGES CXX)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17) 						# Use c++17
set(CMAKE_CXX_STANDARD_REQUIRED True)

# tell cmake to output binaries here:
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# Debug and release flags
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0 -Wall -Wextra -Wpedantic -Weffc++")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# tell cmake where to look for *.h files
include_directories(${PROJECT_SOURCE_DIR}/src)

# create library " libtools "
add_library(tools src/vowels-and-consonants.cc)

# Adds an executable target called "vowels-and-consonants" to be built from the source files listed in the command invocation.
add_executable(vowels-and-consonants
  src/vowels-and-consonants.h
  src/vowels-and-consonants.cc
  src/main.cc)

# tell the linker to bind these objects together
# It's important to place target_link_libraries after the add_executable and find_package lines, so all linked components are known.
target_link_libraries(vowels-and-consonants tools)

# Add expected compiler features to a target.
target_compile_features(vowels-and-consonants PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(vowels-and-consonants PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

############################################################
# Build doxygen from CMake script
# https://stackoverflow.com/questions/34878276/build-doxygen-from-cmake-script
# https://cmake.org/cmake/help/latest/module/FindDoxygen.html
############################################################

find_package(Doxygen)
option(BUILD_DOCUMENTATION "Create and install the documentation (requires Doxygen)" ${DOXYGEN_FOUND})

if(BUILD_DOCUMENTATION)
  if(NOT DOXYGEN_FOUND)
    message(FATAL_ERROR "Doxygen is needed to build the documentation.")
  endif()

  set(doxyfile_in ${CMAKE_CURRENT_SOURCE_DIR}/vowels-and-consonants.Doxyfile)
  set(doxyfile ${CMAKE_CURRENT_BINARY_DIR}/doxyfile)

  configure_file(${doxyfile_in} ${doxyfile} @ONLY)

  message("Doxygen build started.")

  add_custom_target(build ALL
    COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile_in}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build
    COMMENT "Generating API documentation with Doxygen"
    VERBATIM)
endif()
