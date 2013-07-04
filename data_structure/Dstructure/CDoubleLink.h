#pragma once

struct DoubleLink
{
	int element;
	DoubleLink*pLLink;
	DoubleLink*pNLink;
};

class CDoubleLink
{
public:
	CDoubleLink(void);
	~CDoubleLink(void);

public:
	void printLink();
	void createLink(const DoubleLink&node);

private:
	DoubleLink* m_pHead;
	DoubleLink* m_pNext;

};

