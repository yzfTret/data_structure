#include "CSingleLink.h"

CSingleLink::CSingleLink()
{
	
}

CSingleLink::~CSingleLink()
{

}

CSingleLink::addNode(const T &t)
{
	Node<T> pNode = new Node<T>;
	pNode->element = t;
	
	if (m_pTail != NULL)
	{
		m_pTail->link = pNode;//¹Ø¼üµÄÒ»¾ä
		m_pTail = m_pTail->link;
		m_pTail->link = NULL;
	}
	else
	{
		m_pTail = m_pHead = pNode;
	}

	m_listSize++;
}

template<T>
CSingleLink::addHead(const T &t)
{
	if (m_pTail != NULL)
	{

	}
}