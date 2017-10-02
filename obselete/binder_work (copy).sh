BINDER_EXECUTABLE=/home/ashok/libraries/PyBinder/binder-master/build/llvm-4.0/build_release_40.linux.ramman-farid.release/bin/binder
ROOT_MODULE=chenhancc
PREFIX_PATH=/home/ashok/eclipse-workspace/chenhancc/autobinding_build/
CONFIG_BINDER=/home/ashok/eclipse-workspace/chenhancc/config
ALL_INCLUDES=/home/ashok/eclipse-workspace/chenhancc/src/all_includes.hpp
PROJECT_SOURCE_FILES=/home/ashok/eclipse-workspace/chenhancc/src/
BINDER_REPO_PATH=/home/ashok/libraries/PyBinder/binder-master/
PYBIND11_INCLUDES=/home/ashok/libraries/PyBinder/binder-master/build/pybind11/include

echo $ROOT_MODULE".cpp"



if [ "$1" == 1 ]; then
	$BINDER_EXECUTABLE --bind "" --root-module chenhancc --prefix /home/ashok/eclipse-workspace/chenhancc/autobinding_build/ --single-file --annotate-includes --config /home/ashok/eclipse-workspace/chenhancc/config /home/ashok/eclipse-workspace/chenhancc/src/all_includes.hpp -- -x c++ -std=c++11 -I /home/ashok/eclipse-workspace/chenhancc/src/ -I /home/ashok/libraries/PyBinder/binder-master/ 
	#-I /home/ashok/libraries/PyBinder/binder-master/test/..
	cd /home/ashok/eclipse-workspace/chenhancc/autobinding_build/ 
	cp ./chenhancc.cpp ../src/chenhancc.cpp
	clang++ -O3 -shared -std=c++11 -I /home/ashok/libraries/PyBinder/binder-master/build/pybind11/include -I/usr/include/python3.5m -I/home/ashok/eclipse-workspace/chenhancc/src/ -I/home/ashok/libraries/PyBinder/binder-master -I/home/ashok/libraries/PyBinder/binder-master/source -I/usr/lib/gcc/x86_64-linux-gnu/5/include chenhancc.cpp -o chenhancc.so -fPIC
	#cd /home/ashok/eclipse-workspace/chenhancc/autobinding_build/ && clang++ -O3 -shared -std=c++11 -I /home/ashok/libraries/pybind11/include -I/usr/include/python3.5m -I/home/ashok/eclipse-workspace/chenhancc/src/ -I/home/ashok/libraries/PyBinder/binder-master -I/home/ashok/libraries/PyBinder/binder-master/source chenhancc.cpp -o chenhancc.so -fPIC
else
	echo "RUNNING ONLY TESTS. NOT BUILDING LIBRARY FOR PYTHON"
	cd /home/ashok/eclipse-workspace/chenhancc/autobinding_build/
fi

python3 Test00.py
cd ..

