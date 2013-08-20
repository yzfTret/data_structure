// DesignPatten.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "CIterator.h"

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

class B
{
public:
	B::B();
	B::~B();
};

B::B()
{

}

B::~B()
{

}

//�۲���ģʽ


int _tmain(int argc, _TCHAR* argv[])
{
	//����ģʽ

	A*a1 = A::get();
	A *a2 = A::get();

	if (a1 == a2)
	{
		int a = 12;
	}

    ConcreteObjects*pObjects = new ConcreteObjects();
	pObjects->addObjects(1);
	pObjects->addObjects(2);
	pObjects->addObjects(3);

	ConcreteIterator*pIterator = new ConcreteIterator(pObjects);
	int begin = pIterator->bengin();

	while(!pIterator->isDone())
	{
		pIterator->next();
	}
	

	return 0;
}


//�������ʵ�������Ŀ��Ʋ���Լϵͳ��Դ�����ϣ����ϵͳ��ĳ����Ķ���ֻ�ܴ���һ��

