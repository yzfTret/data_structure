// CSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define  SORT_NUM 5

void bubbleSort(int (&num)[SORT_NUM]);
void  insertSort(int (&num)[SORT_NUM]);
void shellSort(int (&num)[SORT_NUM]);
void selectSort(int (&num)[SORT_NUM]);

void mergeSort(int (&num)[SORT_NUM],int low,int high);
void merge(int (&num)[SORT_NUM],int low,int mid,int high);

void quickSort(int (&num)[SORT_NUM],int low,int high);//kuai s

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

	//select text
	int selectText[SORT_NUM] = {2,1,5,4,3};
	selectSort(selectText);


	//merge text
	int mergeText[SORT_NUM] = {2,1,5,4,3};
	mergeSort(mergeText,0,4);

	//quickSort
	int quickText[SORT_NUM] = {2,1,5,4,3};
	quickSort(quickText,0,4);

	for (int i = 0;i < SORT_NUM;++i)
	{
		printf("%d\n",quickText[i]);
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

//选择排序  不稳定的
void selectSort(int (&num)[SORT_NUM])
{
	for (int j = 0;j < SORT_NUM-1;++j)
	{
		int k = j;
		for (int i = j+1;i < SORT_NUM;++i)
		{
			if (num[k] > num[i])
			{
				k = i;
			}
		}

		if (j != k)
		{
			int temp = num[j];
			num[j] = num[k];
			num[k] = temp;
		}		
	}	
}

//归并操作 稳定的
void mergeSort(int (&num)[SORT_NUM],int low,int high)
{
	if (low < high)
	{
		int mid = (low +high)/2;
		mergeSort(num,0,mid);
		mergeSort(num,mid+1,high);
		merge(num,0,mid,high);
	}
}

void merge(int (&num)[SORT_NUM],int low,int mid,int high)
{
	int num2[SORT_NUM] = {};

	int i = low;
	int j=  mid+1;
	int k = low;


	while(i <= mid && j <= high)
	{
		if (num[j] > num[i])
		{
			num2[k++] = num[i++];
		}
		else
		{
			num2[k++] = num[j++];
		}
	}

	while(i <= mid)
	{
		num2[k++] = num[i++];
	}

	while(j <= high)
	{
		num2[k++] = num[j++];
	}

	for (i = low; i <= high;i++)
	{
		num[i] = num2[i];
	}
}

void quickSort(int (&num)[SORT_NUM],int low,int high)
{
	int mid = (low+high)/2;
	int key = num[mid];


	for(int i = low,j = high;i <j;)
	{
		while(!(key < num[i] || i > mid))
		{
			i++;
		}

		if (i < mid)
		{
			num[mid] = num[i];
			mid = i;
		}

		while(j > 0 && !(key > num[j] && j > mid))
		{
			j--;
		}

		if (j > mid)
		{
			num[mid] = num[j];
			mid = j;
		}

		num[mid] = key;

		if (mid - low > 1)
		{
			quickSort(num,low,mid-1);
		}

		if (high - mid > 1)
		{
			quickSort(num,mid+1,high);
		}

	}
}




