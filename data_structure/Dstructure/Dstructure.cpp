// Dstructure.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CSingleLink.h"
#include "CDoubleLink.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
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
	link.clearLink();

	CDoubleLink doubleLink;
	DoubleLink dNode = {};
	dNode.element = 5;
	doubleLink.createLink(dNode);
	dNode.element = 10;
	doubleLink.createLink(dNode);
	dNode.element = 15;
	doubleLink.createLink(dNode);

	doubleLink.printLink();

	Sleep(10000);
	return 0;
}

