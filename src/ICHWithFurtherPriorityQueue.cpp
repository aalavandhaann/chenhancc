// ICHWithFurtherPriorityQueue.cpp: implementation of the CICHWithFurtherPriorityQueue class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "ICHWithFurtherPriorityQueue.h"

using namespace std;
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CICHWithFurtherPriorityQueue::CICHWithFurtherPriorityQueue(const CRichModel& inputModel, const set<int> &indexOfSourceVerts) : CImprovedCHWithEdgeValve(inputModel, indexOfSourceVerts)
{
	nameOfAlgorithm = "ICH2";
}

CICHWithFurtherPriorityQueue::~CICHWithFurtherPriorityQueue()
{
}



void CICHWithFurtherPriorityQueue::InitContainers()
{
	m_InfoAtAngles.resize(model.GetNumOfEdges());
}

void CICHWithFurtherPriorityQueue::ClearContainers()
{
	while (!m_QueueForWindows.empty())
	{
		delete m_QueueForWindows.top().pWindow;
		m_QueueForWindows.pop();
	}
	
	while (!m_QueueForPseudoSources.empty())
	{
		m_QueueForPseudoSources.pop();
	}	
}

void CICHWithFurtherPriorityQueue::BuildSequenceTree()
{
	ComputeChildrenOfSource();
	bool fFromQueueOfPseudoSources = UpdateTreeDepthBackWithChoice();
	while (!m_QueueForPseudoSources.empty() || !m_QueueForWindows.empty())
	{	
		if ((int)m_QueueForWindows.size() > nMaxLenOfWindowQueue)
			nMaxLenOfWindowQueue = (int)m_QueueForWindows.size();
		if (m_QueueForPseudoSources.size() > nMaxLenOfPseudoSources)
			nMaxLenOfPseudoSources = m_QueueForPseudoSources.size();
		if (fFromQueueOfPseudoSources) //pseudosource
		{				
			int indexOfVert = m_QueueForPseudoSources.top().indexOfVert;
			m_QueueForPseudoSources.pop();			
			ComputeChildrenOfPseudoSource(indexOfVert);	
		}
		else			
		{
			QuoteWindow quoteW = m_QueueForWindows.top();
			m_QueueForWindows.pop();
			ComputeChildrenOfWindow(quoteW);		
			delete quoteW.pWindow;
		}
		fFromQueueOfPseudoSources = UpdateTreeDepthBackWithChoice();
	}
}
