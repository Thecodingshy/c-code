#pragma once
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

void HeapInit(HP* php);
void HeapDestory(HP* php);
void HeapPush(HP* php, HPDataType x);
void HeapPrint(HP* php);
//
void AdjustUp(HPDataType* a, int child);
//
void AdjustDown(HPDataType* a, int size, int parent);
void AdjustDownBigHeap(HPDataType* a, int size, int parent);
void Swap(HPDataType* p1, HPDataType* p2);
void HeapPop(HP* php);	//只能删除堆顶的数据，删除其他位置数据无意义
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);
int HeapSize(HP* php);

