#pragma once

 struct Node
 {
// 	Node(int e,Node*next)
//  	{
//  		element = e;
//  		link = next;
//  	}
 
 	int element;
 	Node* link;
 };

class CSingleLink
{
public:
	CSingleLink(void);
	~CSingleLink(void);

public:
	void printLink();
	void createLink(const Node &node);

private:
	Node* m_pHead;
	Node* m_pNext;
	
	int   m_linkSize;
};

