Chenhancc
==============

A Fast geodesic algorithm in python that spans across the surface through the polygons. You will find it useful if you are working with 3D graphics and triangular meshes. Given a pt <a> as seed then this algorithm finds a smooth point to any point <p> on the mesh.
<p>
The algorithm is purely based on the paper of Shiqing who provided me with this wonderful c++ code as well. All I had to do was make some changes so it can be compiled as a python library. The timing or efficiency difference between the pure python implementation and c++ -> python conversion is atleast 210x times. 
</>

Many Thanks
-----------

The original c++ source code was provided to me by Dr. Xin Shiqing (https://sites.google.com/site/xinshiqing/). My sincere thanks to him for his help

```
Xin SQ, Wang GJ. Improving Chen and Han's algorithm on the discrete geodesic problem. ACM Transactions on Graphics (TOG). 2009 Aug 1;28(4):104.
```

-----------------
Running the tests
-----------------

Below snippets are some examples to test the chenhancc library::

---------------------------
A simple test using Python3
---------------------------

    #!/usr/bin/env python3

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
	rmodel.Preprocess();
	
	print('END OF TESTS')

Demos
---------

If you want to perform demos as shown in the screenshots above. Then after installing the sharedobject for chenhancc you should be also install another Blender plugin to see live paths on meshes. The link to the repository is [here](https://github.com/aalavandhaann/ch_bl_geodesics). Once you have installed the plugin then start clicking on the meshes and see paths between consecutive clicks. 


Demos - Blender
-------------------

You will find <b>blender</b> folder inside the <b>demo</b> folder. There is a blend file that can test a mesh loaded in the scene. Just ensure to load a mesh, select it with mouse and run the script `(Alt-p)`. You should see a path between the selected vertices as supplied in the code in the text editor of Blender. In the below code change the `svid` and `evid` to change the vertex selection. `svid` is the seed vertex index, and `evid` is the target vertex index to which a path should be found. 

---------------------------
A simple test using Blender
---------------------------
.. code:: python
	#----------Blender based api modules import----------------
	import bpy, bmesh;
	from mathutils import Vector;
	#----------End of Blender based api modules import----------------
	
	from chenhancc import CBaseModel as BaseModel, CRichModel as RichModel, CPoint3D as Point3D, CFace as Face, CICHWithFurtherPriorityQueue as ICHWithFurtherPriorityQueue;
	
	
	c = bpy.context;
	m = c.active_object;
	svid = 0;
	evid = 20000;
	
	def rotate(l, n):
	    return l[n:] + l[:n];
	
	def createPathMesh(points):
	    myvertexlist = [[2,2,2],[4,4,4],[6,6,6],[8,8,8]]
	    
	    obName = "path_"+str(len(points));
	    me = bpy.data.meshes.new(obName);
	    ob = bpy.data.objects.new(obName, me);
	
	    # Get a BMesh representation
	    bm = bmesh.new();   # create an empty BMesh
	    bm.from_mesh(me);   # fill it in from a Mesh
	
	    # Modify the BMesh, can do anything here...
	    for index, co in enumerate(points):
	        v = bm.verts.new(co);
	        v.index = index;
	        
	    bm.verts.ensure_lookup_table();
	    
	    for index, co in enumerate(points[1:]):
	        v1 = bm.verts[index-1];
	        v2 = bm.verts[index];
	        e = bm.edges.new((v1, v2));
	        
	    
	    # also add bm.edges and bm.faces
	
	    # Finish up, write the bmesh back to the mesh
	    bm.to_mesh(me);
	    bm.free();  # free and prevent further access
	    
	    scn = bpy.context.scene;
	    scn.objects.link(ob);
	    scn.objects.active = ob;
	    ob.select = True;
	
	
	if(m):
	    verts = [];
	    faces = [];
	    loops = m.data.loops;
	    
	    bmodel = RichModel();
	    
	    m.data.vertices[svid].select = True;
	    m.data.vertices[evid].select = True;
	    
	    for v in m.data.vertices:
	        p3d = Point3D(v.co.x, v.co.y, v.co.z);
	        verts.append(p3d);
	   
	    for f in m.data.polygons:
	        f_vids = [loops[lid].vertex_index for lid in f.loop_indices];        
	        faces.append(Face(f_vids[0], f_vids[1], f_vids[2]));
	    
	    bmodel.LoadModel(verts, faces);
	    bmodel.Preprocess();
	    
	    emethod = ICHWithFurtherPriorityQueue(bmodel, set([svid]));
	    emethod.Execute();
	    paths = emethod.FindSourceVertex(evid,[]);
	    paths = rotate(paths, 1);
	    
	    path_verts = [];
	    
	    for epoint in paths:
	        pt = epoint.Get3DPoint(bmodel);
	        path_verts.append(Vector((pt.x, pt.y, pt.z)));
	    createPathMesh(path_verts);
	    print('DONE FOUND THE PATHS::: ');

-------------
Installation
-------------
**On any OS (Linux, OS X, MAC, Windows)**

 - Clone this repository
 - Navigate inside distribution_files
 - run `python3 setup.py build` - To create the build
 - run `python3 setup.py install --user` - for copying in your local library
 - Or this can be pip-able soon or already available as ```pip3 install chenhancc ```


**Prerequesties for compiling everything yourself**
- This code is compiled using the magic binders for pybind11 created by binder.

	*[Github link for binder](https://github.com/RosettaCommons/binder).
	
	*[Github link for pybind11](https://github.com/pybind/pybind11).

