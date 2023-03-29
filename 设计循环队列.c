#define _CRT_SECURE_NO_WARNINGS
#include<stdbool.h>
//  OJ 622


//------------------------数组方法--------------------------------------------------------

bool myCircularQueueIsFull(MyCircularQueue* obj);
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
typedef struct {
	int* a;		//数组指针
	int front;
	int tail;
	int k;
}MyCircularQueue;

MyCircularQueue* myCirularQueueCreate(int k)
{
	MyCircularQueue* cq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	cq->a = (int*)malloc(sizeof(int) * (k + 1));
	cq->front = cq->tail = 0;
	cq->k = k;

	return cq;
}


bool myCirularQueueEnQueue(MyCircularQueue* obj, int value)
{
	if (myCircularQueueIsFull)
		return false;
	obj->a[obj->tail] = value;
	obj->tail++;
	obj->tail %= (obj->k + 1);

	return true;
}


bool myCirularQueueDeQueue(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
		return false;

	obj->front++;
	obj->front %= ((obj->k) + 1);
	return true;
}

int myCircularQueueFront(MyCircularQueue* obj)
{
	if (myCircularQueueIsEmpty(obj))
		return -1;
	return obj->a[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj)	//取队尾分情况
{
	if (myCircularQueueIsEmpty(obj))
		return -1;

	int i = (obj->tail+obj->k)%(obj->k+1);	//需画图分析
	return obj->a[i];
	//if (obj->tail == 0)
	//	return obj->a[obj->k - 1];
	//else
	//	return obj->a[obj->tail - 1];

}

bool myCircularQueueIsFull(MyCircularQueue* obj)
{
	return (obj->tail + 1) % (obj->k + 1) == (obj->front);
}


bool myCircularQueueIsEmpty(MyCircularQueue* obj)
{
	return obj->front == obj->tail;
}


void myCircularQueueFree(MyCircularQueue* obj)
{
    free(obj->a);
    free(obj);
}


//----------------------队列方法-------------------------------------------

/*
typedef struct {
    int *a;
    int k;
    int tail;
    int head;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) 
{
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    obj->a = malloc(sizeof(int)*(k+1));//因为要多开一个空间去判断 空or满
    obj->head = obj->tail =0;
    obj->k = k;
    return obj;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) 
{
    return obj->head == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) 
{
    int next = obj->tail + 1;
    if(next == obj->k+1)                //如果是满的话为了跟obj->head(0)方便后面返回
      next = 0;                         //所以把next处理为0；
    return next == obj->head;           //方便返回值判断

}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if(myCircularQueueIsFull(obj))  //满了就不用录入数据了直接返回
        return false;
     obj->a[obj->tail] = value;
     obj->tail++;
     if(obj->tail == obj->k+1)      //考虑到擦录入数据刚好满了
       obj->tail =0;                //初始化tail,相当于一轮已经录入所以K个空间
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj)) //空了就不用去除数据
      return false;
    ++obj->head;
    if(obj->head == obj->k+1)       //当我删的次数达到最大K个空间时候，又初始化
       obj->head =0;                //类似上面的EnQueue
    return true;

}

int myCircularQueueFront(MyCircularQueue* obj) 
{
    if(myCircularQueueIsEmpty(obj))
      return -1;
    return obj->a[obj->head];
}

int myCircularQueueRear(MyCircularQueue* obj) 
{
    if(myCircularQueueIsEmpty(obj))     //为空取不到
      return -1;
    int prev = obj->tail-1;
    if(obj->tail ==0)                   //在队列满了时候存储满了就
      prev =obj->k;
    return obj->a[prev];

}

void myCircularQueueFree(MyCircularQueue* obj) {
     free(obj->a);
     free(obj);
}
*/