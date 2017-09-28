
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
#print(rmodel.GetNumOfVerts(), rmodel.GetNumOfFaces());


if __name__ == "__main__":
    test_library();