#define _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}


void HeapDestory(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}


void AdjustUp(HPDataType* a,int child)
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
		if ( child+1<size && a[child + 1] < a[child])
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

void AdjustDownBigHeap(HPDataType* a, int size, int parent)		//最简洁的写法！！！
{
	int child = 2 * parent + 1;
	while (child < size)		//开始默认是左孩子，但是右孩子不一定存在
	{
		if (child + 1 < size && a[child + 1] > a[child])
		{
			child++;
		}

		//孩子跟父亲比较
		if (a[child] > a[parent])
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


void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a,sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newcapacity;
		
	}

	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a,php->size - 1);	//size-1就是刚插入的数字
}


void HeapPrint(HP* php)
{
	assert(php);
	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}



void HeapPop(HP* php)	//删除堆顶数据，继续保持最后删除后剩下依旧是小堆
{
	assert(php);
	assert(php->size > 0);

	Swap(php->a[0], php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}


HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}



bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}



int HeapSize(HP* php)
{
	assert(php);
	return php->size;
}