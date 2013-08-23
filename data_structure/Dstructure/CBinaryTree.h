#pragma once

struct BTNode
{
	BTNode()
	{
	   lChild =  NULL;
	   rChild =  NULL;
	}

	BTNode(char e,BTNode*pLChild,BTNode*pRChild)
	{
		element = e;
		lChild = pLChild;
		rChild = pRChild;
	}

	char element;
	BTNode*lChild;
	BTNode*rChild;
};

class CBinaryTree
{
public:
	CBinaryTree(void);
	~CBinaryTree(void);

public:
	void  makeTree(char e,CBinaryTree &left,CBinaryTree &right);
	void  preOrder(BTNode*pRoot);
	void  inOrder(BTNode*pRoot);
	void  postOrder(BTNode*pRoot);

	bool  isInTree(BTNode *pRoot,BTNode *pFind);
	int   getTreeHigh(BTNode *pRoot);
	int   getLeafCount(BTNode*pRoot);
	BTNode* getRoot();


private:
   BTNode* m_pRoot;
};

