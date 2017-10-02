// ImprovedCHWithEdgeValve.h: interface for the CImprovedCHWithEdgeValve class.
//
//////////////////////////////////////////////////////////////////////


#pragma once
#include "stdafx.hpp"
#include "PreviousCH.hpp"
using namespace std;

class CImprovedCHWithEdgeValve : public CPreviousCH 
{
protected:
	virtual bool CheckValidityOfWindow(Window& w);
public:
    CImprovedCHWithEdgeValve(const CRichModel& inputModel, const std::set<int> &indexOfSourceVerts);
	virtual ~CImprovedCHWithEdgeValve();
};





// ImprovedCHWithEdgeValve.cpp: implementation of the CImprovedCHWithEdgeValve class.
//
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CImprovedCHWithEdgeValve::CImprovedCHWithEdgeValve(const CRichModel& inputModel, const set<int> &indexOfSourceVerts) : CPreviousCH(inputModel, indexOfSourceVerts)
{
	nameOfAlgorithm = "ICH1";
}

CImprovedCHWithEdgeValve::~CImprovedCHWithEdgeValve()
{

}

bool CImprovedCHWithEdgeValve::CheckValidityOfWindow(Window& w)
{
	if (w.fDirectParenIsPseudoSource)
		return true;
	const CEdge& edge = model.Edge(w.indexOfCurEdge);
	//TRACE
	//out << setw(10) << setiosflags(ios_base::fixed) << min(10000, m_InfoAtVertices[edge.indexOfLeftVert].disUptodate) << "\t";
	//out << setw(10) << setiosflags(ios_base::fixed) << min(10000, m_InfoAtVertices[edge.indexOfRightVert].disUptodate) << "\t";
	//out << setw(10) << setiosflags(ios_base::fixed) << min(10000, m_InfoAtVertices[model.Edge(edge.indexOfReverseEdge).indexOfOppositeVert].disUptodate) << "\n";
	//out.flush();
	int leftVert = edge.indexOfLeftVert;
	double detaX = w.coordOfPseudoSource.first - w.proportions[1] * edge.length;
	double rightLen = sqrt(detaX * detaX + w.coordOfPseudoSource.second * w.coordOfPseudoSource.second);
	if (m_InfoAtVertices[leftVert].disUptodate < 10000  / model.m_scale && m_InfoAtVertices[leftVert].disUptodate + w.proportions[1] * edge.length
		< w.disToRoot + rightLen)
	{
		return false;
	}
	int rightVert = edge.indexOfRightVert;
	detaX = w.coordOfPseudoSource.first - w.proportions[0] * edge.length;
	double leftLen = sqrt(detaX * detaX + w.coordOfPseudoSource.second * w.coordOfPseudoSource.second);
	if (m_InfoAtVertices[rightVert].disUptodate < 10000  / model.m_scale && m_InfoAtVertices[rightVert].disUptodate + (1 - w.proportions[0]) * edge.length
		< w.disToRoot + leftLen)
	{
		return false;
	}
	const CEdge& oppositeEdge = model.Edge(edge.indexOfReverseEdge);
	double xOfVert = edge.length - oppositeEdge.coordOfOppositeVert.first;
	double yOfVert = -oppositeEdge.coordOfOppositeVert.second;
	if (m_InfoAtVertices[oppositeEdge.indexOfOppositeVert].disUptodate < 10000  / model.m_scale)
	{
		if (w.fDirectParentEdgeOnLeft)
		{
			double deta = w.disToRoot + leftLen - m_InfoAtVertices[oppositeEdge.indexOfOppositeVert].disUptodate;
			if (deta <= 0)
				return true;
			detaX = xOfVert - w.proportions[0] * edge.length;
			if (detaX * detaX + yOfVert * yOfVert < deta * deta)
				return false;
		}
		else
		{
			double deta = w.disToRoot + rightLen - m_InfoAtVertices[oppositeEdge.indexOfOppositeVert].disUptodate;
			if (deta <= 0)
				return true;
			detaX = xOfVert - w.proportions[1] * edge.length;
			if (detaX * detaX + yOfVert * yOfVert < deta * deta)
				return false;
		}
	}
	return true;
}
