#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"
//OJ 用队列实现栈
typedef struct {		
	Queue q1;  
	Queue q2;
}MyStack;

MyStack* MyStackCreate()
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
	Queue* emptyQ = &obj->q1;	//设置q1空
	Queue* nonemptyQ = &obj->q2;//q2不空
	if (!QueueEmpty(&obj->q2))	//如果假设错误
	{
		emptyQ = &obj->q2;		//设置q2空
		nonemptyQ = &obj->q1;	//q1为空
	}
	while (QueueSize(nonemptyQ) > 1)				//直到剩下一个数据
	{
		QueuePush(emptyQ, QueueFront(nonemptyQ));	//把非空的数据取下来给空的队列
		QueuePop(nonemptyQ);
	}
	int top = QueueFront(nonemptyQ);				
	QueuePop(nonemptyQ);							//处理之前有数据的队列的最后一个数据，
													//实现了后进先出的性质
	return top;
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

//如果为空返回true,否则返回false
bool myStackEmpty(MyStack* obj)			//要判断两个队列都不为空所以要&&
{
	return QueueEmpty((&obj->q1)) && QueueEmpty(&obj->q2);	//q1为空且q2为空符合自定义栈为空返回true	
}						     	//QueueEmpty((&obj->q1)) && QueueEmpty(&obj->q2);该条件成立返回true

void myStackFree(MyStack* obj) 
{
	QueueDestory(&obj->q1);	//把两个指针指向的结点释放掉
	QueueDestory(&obj->q2);	//把两个指针指向的结点释放掉
	free(obj);				//obj只有一个所以直接free掉结构体	
}


int main()
{
	MyStack* st = MyStackCreate();
	return 0;
}