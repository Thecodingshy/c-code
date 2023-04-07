#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<assert.h>

void PrintTopK(int *a,int n,int k)
{
	//1.建堆--用a中前K个数建堆
	int* KMinHeap = (int *)malloc(sizeof(int) * k);
	assert(KMinHeap);
	for (int i = 0; i < k; i++)
	{
		KMinHeap[i] = a[i];
	}
	for (int i = (k - 1 - 1 ) / 2; i >= 0; i--)
	{
		AdjustDown(KMinHeap, k, i);
	}
	//2.将剩余n-k个元素依次与对顶元素交换，不满则替换
	for (int j = k; j < n; j++)
	{
		if (a[j] > KMinHeap[0])
		{
			KMinHeap[0] = a[j];
			AdjustDown(KMinHeap, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", KMinHeap[i]);
	}
	printf("\n");
}


void TextTopK()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	if (a == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	srand(time(0));
	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % 1000000;
	}
	a[695] = 1000000 + 1;
	a[123] = 1000000 + 2;
	a[5562] = 1000000 + 3;
	a[9265] = 1000000 + 4;
	a[2965] = 1000000 + 5;
	a[52] = 1000000 + 6;
	a[545] = 1000000 + 7;
	a[8585] = 1000000 + 8;
	a[525] = 1000000 + 9;
	a[365] = 1000000 + 10;
	PrintTopK(a, n, 10);
}

//int main()
//{
//	TextTopK();
//	return 0;
//}
