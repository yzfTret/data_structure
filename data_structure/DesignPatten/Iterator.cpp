#include "StdAfx.h"
#include "CIterator.h"


void ConcreteObjects::addObjects(int object)
{
	m_objects.push_back(object);
}

int ConcreteObjects::size()
{
	return m_objects.size();
}

// ConcreteIterator::ConcreteIterator(ConcreteObjects* pObjects)
// {
// 	m_pConcreteObjects = pObjects;
// 	m_index = 0;
// }

int ConcreteIterator::bengin()
{
	if (m_pConcreteObjects != NULL)
	{
		return (*m_pConcreteObjects)[0];
	}

	return 0;
}

int ConcreteIterator::end()
{
	if (m_pConcreteObjects != NULL)
	{
		int count = m_pConcreteObjects->size();
		return (*m_pConcreteObjects)[count-1];
	}

	return 0;
}


