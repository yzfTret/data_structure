#pragma once

/*
特点：

1.观察者模式定义了对象之间一对多的关系。

2.主题（也就是可观察者）用一个共同的接口来更新观察者。

3.观察者和可观察者用松耦合的方式结合，可观察者不知道观察者的细节，只知道观察者实现了观察者接口

4.有多个观察者时，不可以依赖特点的通知次序。

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std ;


class CObserver
{
public:
	CObserver(void);
	~CObserver(void);

protected:
	string m_name;

public:
	virtual void update()
	{
		cout<<"cobserver"<<endl;
	}
};

class Man:public CObserver
{
public:
	Man(const string &name)
	{
		m_name = name;
	}

	virtual void update()
	{
		cout<<"man"<<endl;
	}
};

class Woman:public CObserver
{
public:
	Woman(const string &name)
	{
		m_name = name;
	}

	virtual void update()
	{
		cout<<"woman"<<endl;
	}
};

class Subject
{
public:
	void addObserver(CObserver* pObserver)
	{
		if (pObserver != NULL)
		{
			m_pObservers.push_back(pObserver);
		}
	}

	void notify()
	{
		for (vector<CObserver*>::iterator it = m_pObservers.begin();it != m_pObservers.end();++it)
		{
			(*it)->update();
		}
	}
private:
	vector<CObserver*> m_pObservers;

};

