#pragma once
#include <vector>
/* 
    迭代器模式:提供一种方法顺序访问一个聚合对象中个各个元素，而不暴露该对像的内部表示. 
      模式的动机： 
      （1）一个聚合对象，如一个列表(List)或者一个集合(Set)，应该提供一种方法来让别人可以访问 
      它的元素，而又不需要暴露它的内部结构。 
      （2）针对不同的需要，可能还要以不同的方式遍历整个聚合对象，但是我们并不希望在聚合对象的 
      抽象层接口中充斥着各种不同遍历的操作。 
	  （3）怎样遍历一个聚合对象，又不需要了解聚合对象的内部结构，还能够提供多种不同的遍历方式， 
	  这就是迭代器模式所要解决的问题。 

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