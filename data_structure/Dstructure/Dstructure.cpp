// Dstructure.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CSingleLink.h"
#include "CDoubleLink.h"
#include "CBinaryTree.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{

	//单链表
	CSingleLink link;
	link.printLink();
	Node node = {};
	node.element = 2;
	link.createLink(node);
	node.element = 3;
	link.createLink(node);
	node.element = 4;
	link.createLink(node);

	link.printLink();

	link.reverse();
	link.printLink();

	link.clearLink();
	link.printLink();



	//双链表
	CDoubleLink doubleLink;
	DoubleLink dNode = {};
	dNode.element = 5;
	doubleLink.createLink(dNode);
	dNode.element = 10;
	doubleLink.createLink(dNode);
	dNode.element = 15;
	doubleLink.createLink(dNode);

	doubleLink.printLink();

	//二叉树
	CBinaryTree a;
	CBinaryTree b;
	CBinaryTree x;
	CBinaryTree y;
	CBinaryTree z;
	CBinaryTree h;

	y.makeTree('J',a,b);
	z.makeTree('G',a,b);
	x.makeTree('F',y,z);
	y.makeTree('H',a,b);
	z.makeTree('E',y,x);
	h.makeTree('D',z,a);
	x.makeTree('K',a,b);
	y.makeTree('C',x,a);
	x.makeTree('B',a,y);
	z.makeTree('A',h,x);

	//z.preOrder(z.getRoot());
	//z.postOrder(z.getRoot());

	bool isIn = z.isInTree(z.getRoot(),z.getRoot());

	int high = z.getTreeHigh(z.getRoot());

	int leafCount = z.getLeafCount(z.getRoot());
    

	Sleep(10000);
	return 0;
}

