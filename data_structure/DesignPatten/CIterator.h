#pragma once
#include <vector>
/* 
    ������ģʽ:�ṩһ�ַ���˳�����һ���ۺ϶����и�����Ԫ�أ�������¶�ö�����ڲ���ʾ. 
      ģʽ�Ķ����� 
      ��1��һ���ۺ϶�����һ���б�(List)����һ������(Set)��Ӧ���ṩһ�ַ������ñ��˿��Է��� 
      ����Ԫ�أ����ֲ���Ҫ��¶�����ڲ��ṹ�� 
      ��2����Բ�ͬ����Ҫ�����ܻ�Ҫ�Բ�ͬ�ķ�ʽ���������ۺ϶��󣬵������ǲ���ϣ���ھۺ϶���� 
      �����ӿ��г���Ÿ��ֲ�ͬ�����Ĳ����� 
	  ��3����������һ���ۺ϶����ֲ���Ҫ�˽�ۺ϶�����ڲ��ṹ�����ܹ��ṩ���ֲ�ͬ�ı�����ʽ�� 
	  ����ǵ�����ģʽ��Ҫ��������⡣ 

	  Created by Phoenix_FuliMa 
	  */ 

class CIterator
{
public:
	virtual int bengin() = 0;
	virtual void next() = 0;
	virtual int end() = 0;
	virtual bool isDone() = 0;
	virtual int current() = 0;
};

class ConcreteObjects
{
public:
	void addObjects(int object);
	int operator[](int index)
	{
		if (index <= size())
		{
			return m_objects[index-1];
		}

		return 0;
	};
	int  size();

private:
	std::vector<int> m_objects;
};

class ConcreteIterator:public CIterator
{
public:
	ConcreteIterator(ConcreteObjects* pObjects)
	{
		m_pConcreteObjects = pObjects;
		m_index = 0;
	};
public:
	virtual int bengin();
	virtual int end();
	virtual void next()
	{
		m_index++;
	};
	virtual bool isDone()
	{
		return m_index == m_pConcreteObjects->size();
	};

	virtual int current()
	{
		return (*m_pConcreteObjects)[m_index-1];
	};
	

private:
	ConcreteObjects* m_pConcreteObjects;
	int m_index;
};