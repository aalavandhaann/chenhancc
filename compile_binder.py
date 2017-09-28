from configurations import BINDER_EXECUTABLE, ROOT_MODULE, PREFIX_PATH, ALL_INCLUDES, PROJECT_BASE, PROJECT_SOURCE_FILES, PROJECT_SOURCE_FILES, PROJECT_CONFIG_BINDER, BINDER_REPO_PATH, PYBIND11_INCLUDES, PYTHON_INCLUDES, CLANG_EXECUTABLE;
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
                                    CLANG_EXECUTABLE,"-O3 -shared -std=c++11",
                                    "-I"+PYBIND11_INCLUDES,"-I"+PYTHON_INCLUDES,"-I"+PROJECT_SOURCE_FILES,
                                    "-I"+BINDER_REPO_PATH, "-I"+BINDER_REPO_PATH+"/source",ROOT_MODULE+".cpp","-o",ROOT_MODULE+".so", "-fPIC",
                                    "&", "rm", "~/.local/lib/python3.5/site-packages/"+ROOT_MODULE+".so", 
                                    "&", "cp",PREFIX_PATH+ROOT_MODULE+".so", "~/.local/lib/python3.5/site-packages/"+ROOT_MODULE+".so"];
            print(" ".join(build_library_command));
            p = subprocess.Popen(" ".join(build_library_command), shell = True, cwd=PREFIX_PATH);
            return_code = p.wait();
        
    if(args.t):
        print('TESTING THE SHARED OBJECT WITH TEST00.py');
        test_library();



if __name__ == "__main__":
    print('Compile Binder pybindings');    
    compile_tasks();
    