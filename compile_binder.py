from distutils.sysconfig import get_python_inc, get_python_lib;
import subprocess, argparse;
from direct.directscripts.gendocs import generate

print(':::::::GENERATE BIND FILE, BUILD FROM IT, TEST THE RESULTS ::: ')
def test_library():
    from chenhancc import CPoint3D, CFace, CRichModel, CBaseModel, CExactMethodForDGP;
    from random import random, randint;
    
    verts = [CPoint3D(random() * 3,random() * 3,random() * 3) for i in range(20)];
    faces = [CFace(randint(0,3),randint(0,3),randint(0,3)) for i in range(20)];
    
    print('TESTING BASE MODEL');
    bmodel = CBaseModel();
    bmodel.LoadModel(verts, faces);
    
    print('TESTING RICH MODEL');
    
    rmodel = CRichModel();
    rmodel.LoadModel(verts, faces);
    #rmodel.Preprocess();
    
    #emethod = CExactMethodForDGP();
    
    print('END OF MOVIE')

#Path where the exe or the bin file of binder can be found
BINDER_EXECUTABLE="binder"
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

parser = argparse.ArgumentParser()
parser.add_argument("-g", action='store_true', help="Generate pybind binding cpp files");
parser.add_argument("-b", action='store_true', help="Generate Python library or not");
parser.add_argument("-t", action='store_true', help="Test the generated module");


def compile_tasks():
    args = parser.parse_args();
    
    if(args.g):
        print('GENERATE BINDING CPP FILE');
        generate_command = [BINDER_EXECUTABLE, "--bind", '""',
                                            "--root-module",ROOT_MODULE, 
                                            "--prefix", PREFIX_PATH, 
                                            "--single-file", "--annotate-includes",
                                            "--config", PROJECT_CONFIG_BINDER,
                                            ALL_INCLUDES, "--", "-x", "c++", "-std=c++11",
                                            "-I"+PROJECT_SOURCE_FILES, "-I"+BINDER_REPO_PATH
                                            ];
        p = subprocess.Popen(" ".join(generate_command), shell = True);
        return_code = p.wait();
        if(args.b):
            build_library_command = ["cp", PREFIX_PATH+"/"+ROOT_MODULE+".cpp",PROJECT_SOURCE_FILES+"/"+ROOT_MODULE+".cpp","&",
                                    "clang++","-O3 -shared -std=c++11",
                                    "-I"+PYBIND11_INCLUDES,"-I"+PYTHON_INCLUDES,"-I"+PROJECT_SOURCE_FILES,
                                    "-I"+BINDER_REPO_PATH, "-I"+BINDER_REPO_PATH+"/source",ROOT_MODULE+".cpp","-o",ROOT_MODULE+".so", "-fPIC",
                                    "&", "rm", PROJECT_BASE+ROOT_MODULE+".so", 
                                    "&", "cp",PREFIX_PATH+ROOT_MODULE+".so", PROJECT_BASE+ROOT_MODULE+".so"];
            print(" ".join(build_library_command));
            p = subprocess.Popen(" ".join(build_library_command), shell = True, cwd=PREFIX_PATH);
            return_code = p.wait();
        
    if(args.t):
        print('TESTING THE SHARED OBJECT WITH TEST00.py');
        test_library();



if __name__ == "__main__":
    print('Compile Binder pybindings');    
    compile_tasks();
    