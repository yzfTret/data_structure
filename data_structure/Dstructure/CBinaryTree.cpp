#include "StdAfx.h"
#include "CBinaryTree.h"


CBinaryTree::CBinaryTree(void)
{
	m_pRoot = NULL;
}


CBinaryTree::~CBinaryTree(void)
{
}

void  CBinaryTree::makeTree(char e,CBinaryTree &left,CBinaryTree &right)
{
	if (m_pRoot!= NULL ||  &left == &right)
	{
	   return;
	}

	m_pRoot = new BTNode(e,left.m_pRoot,right.m_pRoot);

	left.m_pRoot = NULL;
	right.m_pRoot = NULL;
}

void CBinaryTree::preOrder(BTNode*pRoot)
{
	if (pRoot == NULL)
	{
		return;
	}
	
	printf("..%c",pRoot->element);
	preOrder(pRoot->lChild);
	preOrder(pRoot->rChild);
}

void CBinaryTree::inOrder(BTNode*pRoot)
{
	if (pRoot == NULL)
	{
		return;
	}

	
	inOrder(pRoot->lChild);
	printf("..%c",pRoot->element);
	inOrder(pRoot->rChild);
}

void CBinaryTree::postOrder(BTNode*pRoot)
{
	if (pRoot == NULL)
	{
		return;
	}


	postOrder(pRoot->lChild);
	postOrder(pRoot->rChild);
	printf("..%c",pRoot->element);
}

bool CBinaryTree::isInTree(BTNode *pRoot,BTNode*pFind)
{
    if (pRoot == NULL)
    {
		return false;
    }
	else if (pRoot == pFind)
	{
		return true;
	}
	else 
	{
		if (pRoot->lChild != NULL)
		{
			return isInTree(pRoot->lChild,pFind);
		}
		
		if (pRoot->rChild != NULL)
		{
			return isInTree(pRoot->rChild,pFind);
		}
	}

   return false;	
}

int CBinaryTree::getTreeHigh(BTNode *pRoot)
{
	if (pRoot == NULL)
	{
		return 0;
	}
	else if (pRoot->lChild ==NULL && pRoot->rChild == NULL)
	{
		return 1;
	}
	else
	{
		int lHighht = getTreeHigh(pRoot->lChild);
		int rHight = getTreeHigh(pRoot->rChild);

	    return lHighht>= rHight?lHighht+1:rHight+1;
	}
}

int CBinaryTree::getLeafCount(BTNode*pRoot)
{
	if (pRoot == NULL)
	{
		return 0;
	}
	else if (pRoot->lChild ==NULL && pRoot->rChild == NULL)
	{
		return 1;
	}
	else
	{
		return getLeafCount(pRoot->lChild)+getLeafCount(pRoot->rChild);
	}
}

BTNode* CBinaryTree::getRoot()
{
	return m_pRoot;
}

