#include "StdAfx.h"
#include "CDoubleLink.h"


CDoubleLink::CDoubleLink(void)
{
	m_pHead = NULL;
}


CDoubleLink::~CDoubleLink(void)
{
}

void CDoubleLink::printLink()
{
	if (m_pHead == NULL)
	{
		printf("empty");
	}
	else if (m_pHead == m_pNext&& m_pHead != NULL)
	{
		printf("element is %d\n",m_pHead->element);
	}
	else
	{
		DoubleLink*pLink = m_pHead;
		if (pLink != NULL)
		{
			printf("element is %d\n",pLink->element);
		}

		while (pLink->pNLink != NULL)
		{
			pLink = pLink->pNLink;
			printf("element is %d\n",pLink->element);
			
		}
	}
}


void CDoubleLink::createLink(const DoubleLink&node)
{
     DoubleLink*pLink = new DoubleLink();
	 if (pLink == NULL)
	 {
		 return;
	 }

	 pLink->element = node.element;
	 if (m_pHead == NULL)
	 {
		 m_pHead = pLink;
		 m_pHead->pLLink = NULL;
		 m_pHead->pNLink = NULL;

		 m_pNext = m_pHead;
	 }
	 else if (m_pHead == m_pNext && m_pHead != NULL)
	 {
		 m_pNext->pNLink = pLink;
		 m_pNext->pLLink = m_pNext;
		 m_pNext = pLink;
		 m_pNext->pNLink = NULL; 

		 m_pHead->pNLink = m_pNext;
	 }
	 else
	 {
		 m_pNext->pNLink = pLink;
		 m_pNext->pLLink = m_pNext;
		 m_pNext = pLink;
		 m_pNext->pNLink = NULL; 
	 }
}
