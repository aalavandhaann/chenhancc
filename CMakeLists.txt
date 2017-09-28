cmake_minimum_required(VERSION 2.8.12)
project(chenhancc)
# Set source directory
set(SOURCE_DIR "src")
# Tell CMake that headers are also in SOURCE_DIR
include_directories(${SOURCE_DIR})
set(SOURCES "${SOURCE_DIR}/stdafx.hpp")
set(SOURCES "${SOURCE_DIR}/Point3D.hpp")
set(SOURCES "${SOURCE_DIR}/BaseModel.hpp")
set(SOURCES "${SOURCE_DIR}/RichModel.hpp")

# Generate Python module
add_subdirectory(lib/pybind11)
pybind11_add_module(chenhancc ${SOURCES} "${SOURCE_DIR}/chenhancc.cpp")