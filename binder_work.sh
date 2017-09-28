#Path where the exe or the bin file of binder can be found
BINDER_EXECUTABLE=/home/ashok/libraries/PyBinder/binder-master/build/llvm-4.0/build_release_40.linux.ramman-farid.release/bin/binder
#Name of the project or the namespace that will be used in python to import
ROOT_MODULE=chenhancc
#Path where the build files are stored
PREFIX_PATH=/home/ashok/eclipse-workspace/chenhancc/autobinding_build/
#The single include file containing the include directive for all the source files used in the project
ALL_INCLUDES=/home/ashok/eclipse-workspace/chenhancc/src/all_includes.hpp
#Where are the project source files? (hpp files)
PROJECT_SOURCE_FILES=/home/ashok/eclipse-workspace/chenhancc/src/
#What are your configuration values to be passed to binder when compiling? Location of that file please
PROJECT_CONFIG_BINDER=/home/ashok/eclipse-workspace/chenhancc/config

#Path to the BINDER REPOSITORY
BINDER_REPO_PATH=/home/ashok/libraries/PyBinder/binder-master/
#Path the include files of PYBIND11 (version == 1.1.9)
PYBIND11_INCLUDES=/home/ashok/libraries/PyBinder/binder-master/build/pybind11/include
#Path to Python includes 
PYTHON_INCLUDES=/usr/include/python3.5m



echo $ROOT_MODULE".cpp"



if [ "$1" == 1 ]; then
	$BINDER_EXECUTABLE --bind "" --root-module $ROOT_MODULE --prefix $PREFIX_PATH --single-file --annotate-includes --config $PROJECT_CONFIG_BINDER $ALL_INCLUDES -- -x c++ -std=c++11 -I $PROJECT_SOURCE_FILES -I $BINDER_REPO_PATH

	cd $PREFIX_PATH
	cp ./$ROOT_MODULE".cpp" $PROJECT_SOURCE_FILES"/chenhancc.cpp"
	clang++ -O3 -shared -std=c++11 -I$PYBIND11_INCLUDES -I$PYTHON_INCLUDES -I$PROJECT_SOURCE_FILES -I$BINDER_REPO_PATH -I$BINDER_REPO_PATH"/source" $ROOT_MODULE".cpp" -o $ROOT_MODULE".so" -fPIC
else
	echo "RUNNING ONLY TESTS. NOT BUILDING LIBRARY FOR PYTHON"
	cd $PREFIX_PATH
fi

python3 Test00.py
cd ..

