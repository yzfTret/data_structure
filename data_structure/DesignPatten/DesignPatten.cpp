// DesignPatten.cpp : 定义控制台应用程序的入口点。
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

//观察者模式


int _tmain(int argc, _TCHAR* argv[])
{
	//单例模式

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


//而方便对实例个数的控制并节约系统资源。如果希望在系统中某个类的对象只能存在一个

