// DesignPatten.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

class A
{
public:
	static A* get(){return m_pText;}

private:
	A::A()
	{

	}

	A::~A()
	{

	}
private:
  static A  *m_pText;
};

A*A::m_pText = new A();

int _tmain(int argc, _TCHAR* argv[])
{
	//����ģʽ

	A*a1 = A::get();
	A *a2 = A::get();

	if (a1 == a2)
	{
		int a = 12;
	}
	return 0;
}


//�������ʵ�������Ŀ��Ʋ���Լϵͳ��Դ�����ϣ����ϵͳ��ĳ����Ķ���ֻ�ܴ���һ��

