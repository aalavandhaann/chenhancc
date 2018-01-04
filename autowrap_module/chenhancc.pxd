from libcpp cimport bool
from libcpp.vector cimport vector as libcpp_vector
from libcpp.string cimport string as libcpp_string
from libcpp.set cimport set as libcpp_set

cdef extern from "Point3D.hpp":        
    cdef cppclass CPoint3D:
        double x
        double y
        double z
        CPoint3D()
        CPoint3D(CPoint3D other)
        CPoint3D(double, double, double)        
        void Normalize()
        double Len()

cdef extern from "BaseModel.hpp": 
    cdef cppclass CFace:
        CFace();
        CFace(int, int, int)
        void setIndices(int, int, int)
    
    cdef cppclass CBaseModel:
        CBaseModel();
        void LoadModel(libcpp_vector[CPoint3D], libcpp_vector[CFace] )
        int GetNumOfVerts();
        int GetNumOfFaces();
        bool isAValidModel();

cdef extern from "RichModel.hpp":
    cdef cppclass CEdge:
        int indexOfLeftVert;
        int indexOfRightVert;
        int indexOfOppositeVert;
        int indexOfLeftEdge;
        int indexOfRightEdge;
        int indexOfReverseEdge;
        int indexOfFrontFace;
        double length;      
        CEdge();            
    
    cdef cppclass EdgePoint:
        int index
        double proportion
        bool isVertex
        EdgePoint()
        EdgePoint(int)
        EdgePoint(int, double)
        EdgePoint(CRichModel, int, int, double)
        CPoint3D Get3DPoint(CRichModel)        
    
    cdef cppclass CRichModel(CBaseModel):
        # wrap-inherits:
        # CBaseModel
        # CRichModel(CRichModel)
        CRichModel();
        void Preprocess();
        int GetNumOfEdges();
        int GetNumOfValidDirectedEdges();
        int GetNumOfTotalUndirectedEdges();
        int GetNumOfGenera();
        int GetNumOfIsolated();
        int GetNumOfComponents();
        int GetNumOfBoundries();
        bool IsConvexVert(int);
        bool isBoundaryVert(int);
        bool IsClosedModel();
        bool IsExtremeEdge(int)
        bool IsStartEdge(int);
        bool HasBeenProcessed();
    
        
cdef extern from "ExactMethodForDGP.hpp":
    cdef cppclass InfoAtVertex:
        InfoAtVertex()
        InfoAtVertex(InfoAtVertex other)
        bool fParentIsPseudoSource
        char birthTime
        int indexOfParent
        int indexOfRootVertOfParent
        int level
        double disUptodate
        double entryProp
        
    cdef cppclass CExactMethodForDGP:
        # wrap-ignore    
        # ABSTRACT class
        libcpp_vector[InfoAtVertex] m_InfoAtVertices;
        CExactMethodForDGP(CRichModel, libcpp_set[int])  except +  # wrap-ignore
        int GetRootSourceOfVert(int)
        libcpp_vector[EdgePoint] FindSourceVertex(int, libcpp_vector[EdgePoint])
        void PickShortestPaths(int)
        void Execute()
        void InitContainers()
        void BuildSequenceTree()
        void ClearContainers()
        void FillExperimentalResults()
        double GetRunTime()
        double GetMemoryCost()
        int GetWindowNum()
        int GetMaxLenOfQue()
        double GetNPE()
        int GetDepthOfSequenceTree()
        bool HasBeenCompleted()
        

cdef extern from "PreviousCH.hpp":
    cdef cppclass CPreviousCH(CExactMethodForDGP):
        # wrap-inherits:
        # CExactMethodForDGP
        CPreviousCH(CRichModel,  libcpp_set[int])  except +


cdef extern from "ImprovedCHWithEdgeValve.hpp":
    cdef cppclass CImprovedCHWithEdgeValve(CExactMethodForDGP):
        # wrap-inherits:
        # CPreviousCH
        CImprovedCHWithEdgeValve(CRichModel,  libcpp_set[int])  except +


cdef extern from "ICHWithFurtherPriorityQueue.hpp":
    cdef cppclass CICHWithFurtherPriorityQueue(CExactMethodForDGP):
        # wrap-inherits:
        # CImprovedCHWithEdgeValve
        CICHWithFurtherPriorityQueue(CRichModel,  libcpp_set[int])  except +
    
###AUTOWRAP
#autowrap --out py_chenhan.pyx chenhancc.pxd
#python setup.py build_ext --inplace
    
    
    
    
    
    