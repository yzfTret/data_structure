// Dstructure.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "CSingleLink.h"
#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	CSingleLink link;
	link.printLink();

	Node node = {};
	node.element = 2;

	link.createLink(node);
	link.printLink();

	Sleep(10000);
	return 0;
}

