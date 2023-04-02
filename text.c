#define _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
void Text1()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		HeapPush(&hp, a[i]);
	}

	HeapPush(&hp, 10);
	HeapPrint(&hp);
}



//升序----建大堆
//降序----减小堆
void HeapSort(int* a, int n)
{
	//建堆向上调整-----建小堆
	// 建堆方式1 ：O（N*logN）
	// 建堆方式1 ：O（N*logN）
	// 建堆方式1 ：O（N*logN）
	//for (int i = 1; i < n; i++)
	//{
	//	AdjustUp(a, i);
	//}

	//建堆向下调整前提		是左右子树是大/小堆
	// 建堆方式2 ：O（N）
	// 建堆方式2 ：O（N）
	// 建堆方式2 ：O（N）
	for (int i=(n-1-1)/2; i >=0; i--)	//从第(n-1-1)/2处开始调整倒着走的第一个子树
	{
		AdjustDown(a, n ,i);	//a:表示要排序的a指针数组，n表示数组的大小，
								//i表示从最小子树开始的结点由于是数组（数组可以向前取值实现迭代）也就是可以调整的位置
	}
	//在建好堆的基础上时间复杂度：O(N*logN)

	
	int end = n - 1;
	while (end>0)						//把前0到end看成一个堆，堆里面数据最大的数放到end上;end--
	//end>0表示其他的数都被换走了		//然后相当于数组下标前移，把前0到end-1看成一个堆
										//在剩下的堆里面把最大的数放到end上,end--
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}
	//重点在于用这种算法，无论是向上向下来算，时间复杂度也是N*log*N
	//重点在于用这种算法，无论是向上向下来算，时间复杂度也是N*log*N
	//重点在于用这种算法，无论是向上向下来算，时间复杂度也是N*log*N



// 1.你得先写一个数据结构，反而复杂
// 2.有O(n)的空间复杂度
void TextHeapSort()
{
	//升序打印-----小堆
	HP hp;
	HeapInit(&hp);
	int a[] = { 27,15,19,18,28,34,65,49,25,37 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sz; i++)
	{
		HeapPush(&hp, a[i]);
	}

	int i = 0;
	while (!HeapEmpty(&hp))
	{
		printf("%d ",HeapTop(&hp));
		a[i++] = HeapTop(&hp);
		HeapPop(&hp);
	}
	printf("\n");
}


int main()
{
	Text1();
	TextHeapSort();
	return 0;
}