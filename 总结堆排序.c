#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int HPDataType;
typedef struct Heap {
	HPDataType* a;
	int size;
	int capacity;
}HP;
void AdjustUp(HPDataType* a, int child)
{
	assert(a);
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


void AdjustDown(HPDataType* a, int size, int parent)		//最简洁的写法！！！
{
	int child = 2 * parent + 1;
	while (child < size)		//开始默认是左孩子，但是右孩子不一定存在
	{
		if (child + 1 < size && a[child + 1] < a[child])
		{
			child++;
		}

		//孩子跟父亲比较
		if (a[child] < a[parent])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}


void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


//-------------第一种-----------------------//

void TextHeapSort1(HPDataType* a,int n)
{
	//通过向上调整的方式
	for (int i = 1; i < n; i++)						//时间复杂度为O(N*logN)
	{
		AdjustUp(a,i);
	}
}


//---------------第二种---------------------//

void TextHeapSort2(HPDataType* a, int n, int p)		//总共的时间复杂度是O(N*logN)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)		//O(log N)
	{
		AdjustDown(a, n, i);
	}


	int end = n - 1;
	while (end>0)									//O(N)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

int main()
{
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	int sz = sizeof(a) / sizeof(a[0]);
	TextHeapSort1(&a, sz);
	TextHeapSort2(&a, sz, 0);
	return 0;
}