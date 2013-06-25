#include "StdAfx.h"
#include "CSingleLink.h"


CSingleLink::CSingleLink(void)
{
}


CSingleLink::~CSingleLink(void)
{
}

void CSingleLink::printLink()
{
	if (m_pHead != NULL)
	{
		printf("list is empty");
	}
	else
	{
		Node*pHead = m_pHead;
		while(m_pHead != NULL)
		{
		   printf("list is %d\n",m_pHead->element);
		   pHead = m_pHead->link;
		}
	}
}


