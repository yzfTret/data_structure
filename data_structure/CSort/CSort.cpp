// CSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define  SORT_NUM 5

void bubbleSort(int (&num)[SORT_NUM]);
int _tmain(int argc, _TCHAR* argv[])
{
	int a = 0;
	for (int i = 1; i <= 65;++i)
	{
		a += i*i*i*25;
	}

	int b = a;
	return 0;
}

//冒泡排序. 
void maopao(int (&num)[SORT_NUM])
{
    for (int i = 0; i < SORT_NUM -1;++i)
    {
		for (int j = 0;j < SORT_NUM - i -1;++j)
		{
			if (num[j+1] > num[j])
			{
				int temp = num[j+1];
				num[j+1] = num[j];
				num[j] = temp;
			}
		}
    }
}

