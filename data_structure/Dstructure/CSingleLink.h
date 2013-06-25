#pragma once

 struct Node
 {
 	Node();
	Node(int e,Node*next)
 	{
 		element = e;
 		link = next;
 	}
 
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

private:
	Node* m_pHead;
	
	int   m_linkSize;
};

