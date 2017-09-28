from distutils.sysconfig import get_python_inc;

#Path where the exe or the bin file of binder can be found
BINDER_EXECUTABLE="binder"

#CLANG COMPILER LOCATION
CLANG_EXECUTABLE="clang++"
#Name of the project or the namespace that will be used in python to import
ROOT_MODULE="chenhancc"
#Path where the build files are stored
PREFIX_PATH="/home/ashok/eclipse-workspace/chenhancc/autobinding_build/"
#The single include file containing the include directive for all the source files used in the project
ALL_INCLUDES="/home/ashok/eclipse-workspace/chenhancc/src/all_includes.hpp"
#Location of the project folder
PROJECT_BASE="/home/ashok/eclipse-workspace/chenhancc/" 
#Where are the project source files? (hpp files)
PROJECT_SOURCE_FILES="/home/ashok/eclipse-workspace/chenhancc/src/"
#What are your configuration values to be passed to binder when compiling? Location of that file please
PROJECT_CONFIG_BINDER="/home/ashok/eclipse-workspace/chenhancc/config"

#Path to the BINDER REPOSITORY
BINDER_REPO_PATH="/home/ashok/libraries/PyBinder/binder-master/"
#Path the include files of PYBIND11 (version == 1.1.9)
PYBIND11_INCLUDES="/home/ashok/libraries/PyBinder/binder-master/build/pybind11/include"
#Path to Python includes 
PYTHON_INCLUDES=get_python_inc();