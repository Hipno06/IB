# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @author Víctor García Pérez
# @date nov 22, 2024
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
project(capitalize_vowels                # Mandatory
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
add_library(tools src/capitalize_vowels.cc)

# Adds an executable target called "capitalize_vowels" to be built from the source files listed in the command invocation.
add_executable(capitalize_vowels
  src/capitalize_vowels.h
  src/capitalize_vowels.cc
  src/main.cc)

# tell the linker to bind these objects together
# It's important to place target_link_libraries after the add_executable and find_package lines, so all linked components are known.
target_link_libraries(capitalize_vowels tools)

# Add expected compiler features to a target.
target_compile_features(capitalize_vowels PRIVATE cxx_std_17)

# Add compile options to a target.
target_compile_options(capitalize_vowels PRIVATE -Wall -Wextra -Wpedantic -Weffc++)

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

  set(doxyfile_in ${CMAKE_CURRENT_SOURCE_DIR}/capitalize_vowels.Doxyfile)
  set(doxyfile ${CMAKE_CURRENT_BINARY_DIR}/doxyfile)

  configure_file(${doxyfile_in} ${doxyfile} @ONLY)

  message("Doxygen build started.")

  add_custom_target(build ALL
    COMMAND ${DOXYGEN_EXECUTABLE} ${doxyfile_in}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build
    COMMENT "Generating API documentation with Doxygen"
    VERBATIM)
endif()
