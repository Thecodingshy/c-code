#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
void StackInit(ST* ps);
void StackDestory(ST* ps);
void StackPush(ST* ps, STDataType x);

void StackPop(ST* ps);
STDataType StackTop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);
void StackInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;	//先放再++
	ps->capacity = 0;
}
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, sizeof(STDataType) * newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));	//不至于删完还继续删assert(ps->top>0);
	ps->top--;
}
STDataType StackTop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}
int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;	//指向栈顶数据
}
bool StackEmpty(ST* ps)
{
	assert(ps);
	return	ps->top == 0;	//实用
}

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}Stack;


//--------------------------------------------------------------------------------------------------------------------------------------
//上面是栈相关函数的实现
//下面是实现这OJ题
typedef struct {
	Stack pushST;
	Stack popST;
}MyQueue;


MyQueue* myQueueCreat()
{
	MyQueue* q = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&q->pushST);
	StackInit(&q->popST);
	return q;
}


void myQueuePush(MyQueue* obj, int x)
{
	StackPush(&obj->pushST, x);
}


void myQueueFree(MyQueue* obj)
{
	StackDestory(&obj->pushST);
	StackDestory(&obj->popST);
	free(obj);
}
//
int myQueuePop(MyQueue* obj)
//如果popST中没有数据，将pushST的数据导出去
//popST中的数据就符合先进先出的顺序
{
	if (StackEmpty(&obj->popST))							//pop栈是空的
	{
		while (StackEmpty(&obj->pushST))
		{
			StackPush(&obj->popST, StackTop(&obj->pushST));	//（目标地址，插入的数据）
			StackPop(&obj->pushST);
		}
	}
	int front = StackTop(&obj->popST);
	StackPop(&obj->popST);			//传过来了就删除
	return front;
}


int myQueuePeek(MyQueue* obj)		//返回队列开头元素
{
	if (StackEmpty(&obj->popST))							
	{
		while (StackEmpty(&obj->pushST))
		{
			StackPush(&obj->popST, StackTop(&obj->pushST));	
			StackPop(&obj->popST);
		}
	}
	return StackTop(&obj->popST);
}

bool myQueueEmpty(MyQueue *obj) {
	return StackEmpty(&obj->pushST) && StackEmpty(&obj->popST);
}