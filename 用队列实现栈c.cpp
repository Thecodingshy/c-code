#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"
//OJ 用队列实现栈
typedef struct {		
	Queue q1;
	Queue q2;
}MyStack;

MyStack* MyStackCreat()
{
	MyStack* st = (MyStack*)malloc(sizeof(MyStack));
	if (st == NULL)
	{
		printf("开辟空间失败");
		exit(-1);
	}
	QueueInit(&st->q1);
	QueueInit(&st->q2);

	return st;			//因为是malloc出来的所有出了这个函数st还在
}
void myStackPush(MyStack* obj, int x) 
{
	if (!QueueEmpty(&obj->q1))
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}


int myStackPop(MyStack* obj)
{
	Queue* emptyQ = &obj->q1;
	Queue* nonemptyQ = &obj->q2;
	if (!QueueEmpty(&obj->q2))
	{
		emptyQ = &obj->q2;
		nonemptyQ = &obj->q1;
	}
	while (QueueSize(nonemptyQ) > 1)				//直到剩下一个数据
	{
		QueuePush(emptyQ, QueueFront(nonemptyQ));	//把非空的数据取下来给空的队列
		QueuePop(nonemptyQ);
	}
	int pop = QueueFront(nonemptyQ);				
	QueuePop(nonemptyQ);							//处理之前有数据的队列的最后一个数据

	return pop;
}

int myStackTop(MyStack* obj)					//返回栈顶数据相当于，找队尾的数据，												//即要判断两个队列那个不为空
{
	if (!QueueEmpty(&obj->q1))
	{
		return QueueBack(&obj->q1);
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}


bool myStackEmpty(MyStack* obj)
{
	return QueueEmpty((&obj->q1)) && QueueEmpty(&obj->q2);
}

void myStackFree(MyStack* obj) 
{
	QueueDestory(&obj->q1);
	QueueDestory(&obj->q2);
	free(obj);
}