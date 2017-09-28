// ImprovedCHWithEdgeValve.h: interface for the CImprovedCHWithEdgeValve class.
//
//////////////////////////////////////////////////////////////////////


#pragma once

#include "PreviousCH.h"
class CImprovedCHWithEdgeValve : public CPreviousCH 
{
protected:
	virtual bool CheckValidityOfWindow(Window& w);
public:
    CImprovedCHWithEdgeValve(const CRichModel& inputModel, const std::set<int> &indexOfSourceVerts);
	virtual ~CImprovedCHWithEdgeValve();
};

