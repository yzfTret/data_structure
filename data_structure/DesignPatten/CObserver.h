#pragma once

/*
�ص㣺

1.�۲���ģʽ�����˶���֮��һ�Զ�Ĺ�ϵ��

2.���⣨Ҳ���ǿɹ۲��ߣ���һ����ͬ�Ľӿ������¹۲��ߡ�

3.�۲��ߺͿɹ۲���������ϵķ�ʽ��ϣ��ɹ۲��߲�֪���۲��ߵ�ϸ�ڣ�ֻ֪���۲���ʵ���˹۲��߽ӿ�

4.�ж���۲���ʱ�������������ص��֪ͨ����

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

