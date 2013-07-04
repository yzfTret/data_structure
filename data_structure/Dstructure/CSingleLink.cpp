#include "StdAfx.h"
#include "CSingleLink.h"


CSingleLink::CSingleLink(void)
{
	m_pHead = NULL;
	m_pNext = NULL;
}


CSingleLink::~CSingleLink(void)
{
}

void CSingleLink::printLink()
{
	if (m_pHead == NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		Node*pHead = m_pHead;
		while(pHead != NULL)
		{
			printf("list is %d\n",m_pHead->element);
			pHead = pHead->link;
		}
	}
}

void CSingleLink::createLink(const Node &node)
{
	Node*pNode = new Node();
	if (pNode == NULL)
	{
		printf("crate is fail");
	}

	pNode->element = node.element;

	if (m_pHead == NULL)
	{
		m_pHead = pNode;
		m_pHead->link = NULL;

		m_pNext = m_pHead;
	}
	else 
	{
		m_pNext->link = pNode;
		m_pNext = pNode;
		m_pNext->link = NULL;
	}
}

void CSingleLink::clearLink()
{
	if (m_pHead != NULL)
	{
		Node*pHead = m_pHead;
		Node*pNext = m_pHead;
		while(pHead != NULL)
		{
			pNext = pHead->link;
			delete pHead;
			pHead = NULL;
			pHead = pNext;
		}
	}
}




