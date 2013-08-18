// CSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define  SORT_NUM 5

void bubbleSort(int (&num)[SORT_NUM]);
void  insertSort(int (&num)[SORT_NUM]);
void shellSort(int (&num)[SORT_NUM]);

int _tmain(int argc, _TCHAR* argv[])
{
	//maopao  text 
	int text[SORT_NUM] = {2,1,5,4,3};
	bubbleSort(text);


	//insert text
	int insertText[SORT_NUM] = {2,1,5,4,3};
	insertSort(insertText);


	//shell text
	int shellText[SORT_NUM] = {2,1,5,4,3};
	insertSort(shellText);

	for (int i = 0;i < SORT_NUM;++i)
	{
		printf("%d\n",text[i]);
	}


	return 0;
}

//冒泡排序. 
void bubbleSort(int (&num)[SORT_NUM])
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

//插入排序  
void  insertSort(int (&num)[SORT_NUM])
{
	for (int i = 1;i < SORT_NUM;++i)
	{

		int j = i;
		while(j > 0 && num[j] > num[i])
		{
			num[j] = num[j -1];
			j--;
		}

		num[j] = num[i];
	}
}

//希尔排序
void shellSort(int (&num)[SORT_NUM])
{
	for (int d = SORT_NUM/2;d >= 1;d = d/2)
	{
		for (int i = d;i < SORT_NUM;++i)
		{
			int temp = num[i];
			int j = i - d;
			for (;j >= 0 && num[j] > temp;j = j-d)
			{
				num[j+d] = num[j];
			}
			num[j+d] = temp;
		}
	}
}



