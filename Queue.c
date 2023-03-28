#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;

}


void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;	//处理一直不动的指针pq->tail
}


void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode != NULL)
	{
		newnode->data = x;
		newnode->next = NULL;

		if (pq->head == NULL)
		{
			pq->head = pq->tail = newnode;
		}
		else
		{
			pq->tail->next = newnode;
			pq->tail = newnode;
		}
	}
	printf("开辟失败");
	exit(-1);
}


void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));				//assert(pq->head);

	QueueNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)					//删完了，要处理tail不然tail变成了野指针
	{
		pq->tail = NULL;
	}
}


QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}


QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}


int QueueSize(Queue* pq)
{
	assert(pq);
	int count = 0;

	QueueNode* cur = pq->head;
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	return count;
}


bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;	//pq->head==NULL是真的，返回true；pq->head==NULL是假的，返回false；
}