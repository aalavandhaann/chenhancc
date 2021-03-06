from configurations import BINDER_EXECUTABLE, BINDER_EXECUTABLE_MING, ROOT_MODULE, PREFIX_PATH, ALL_INCLUDES, PROJECT_BASE, PROJECT_SOURCE_FILES, PROJECT_SOURCE_FILES, PROJECT_CONFIG_BINDER, BINDER_REPO_PATH, PYBIND11_INCLUDES, PYTHON_INCLUDES, CLANG_EXECUTABLE;
import os;
import subprocess, argparse;
from direct.directscripts.gendocs import generate

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



parser = argparse.ArgumentParser()
parser.add_argument("-g", action='store_true', help="Generate pybind binding cpp files");
parser.add_argument("-b", action='store_true', help="Generate Python library or not");
parser.add_argument("-t", action='store_true', help="Test the generated module");
parser.add_argument("-ming", action='store_true', help="Mingw system or not");


def compile_tasks():
    args = parser.parse_args();
    
    if(args.g):
        print('GENERATE BINDING CPP FILE');
        generator = BINDER_EXECUTABLE;
        if(args.ming):
            generator = BINDER_EXECUTABLE_MING;

        generate_command = [generator, "--bind", '""',
                                            "--root-module",ROOT_MODULE, 
                                            "--prefix", PREFIX_PATH, 
                                            "--single-file", "--annotate-includes",
                                            "--config", PROJECT_CONFIG_BINDER,
                                            ALL_INCLUDES, "--", "-x", "c++", "-std=c++11",
                                            "-I"+PROJECT_SOURCE_FILES, "-I"+BINDER_REPO_PATH
                                            ];
        print('COMMAND ISSUED L::: ', " ".join(generate_command));
        p = subprocess.Popen(" ".join(generate_command), shell = True);
        return_code = p.wait();
        print('FINISHED GENERATING BINDER CPP FILE');
        
    if(args.b):
        if(os.path.isfile(PREFIX_PATH+ROOT_MODULE+".cpp")):
            print('COMPILE AS SHARED LIBRARY FOR PYTHON');
            build_library_command = ["cp", PREFIX_PATH+"/"+ROOT_MODULE+".cpp",PROJECT_SOURCE_FILES+"/"+ROOT_MODULE+".cpp","&",
                                    CLANG_EXECUTABLE,"-O3 -shared -std=c++14",
                                    "-I"+PYBIND11_INCLUDES,"-I"+PYTHON_INCLUDES,"-I"+PROJECT_SOURCE_FILES,
                                    "-I"+BINDER_REPO_PATH+"/source",ROOT_MODULE+".cpp","-o",ROOT_MODULE+".so", "-fPIC"];
            
            p = subprocess.Popen(" ".join(build_library_command), shell = True, cwd=PREFIX_PATH);
            return_code = p.wait();
            if(os.path.isfile(PREFIX_PATH+ROOT_MODULE+".so")):               
                print('FINISHED TASK FOR PYTHON LIBRARY BUILDING');
            else:
                print('ERROR GENERATING SHARED OBJECT FOR PYTHON. CHECK OUTPUT OF COMMAND ', build_library_command);            
            
            print('FINISHED BUILDING CHENHANCC');
            add_to_user_library = ["rm", "~/.local/lib/python3.5/site-packages/"+ROOT_MODULE+".so", "&", "cp",PREFIX_PATH+ROOT_MODULE+".so", "~/.local/lib/python3.5/site-packages/"+ROOT_MODULE+".so"];
            
        else:
            print('GENERATED FILE NOT FOUND. CHECK FOR ANY ERRORS IN BINDING');
            
    if(args.t):
        print('TESTING THE SHARED OBJECT WITH A SHORT SNIPPET');
        import sys
        sys.path.insert(0, PREFIX_PATH);
        test_library();
        print('FINISHED TESTING THE CHENHANCC LIBRARY');


if __name__ == "__main__":
    compile_tasks();
    