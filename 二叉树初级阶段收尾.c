#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;
void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
void QueuePop(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
typedef int BTDataType;
typedef struct BinaryTreeNode {
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

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
BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	assert(node);

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}
//-----------------------------------------------上面是队列部分----------------------------------------------

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	assert(node1);
	BTNode* node2 = BuyNode(2);
	assert(node1);
	BTNode* node3 = BuyNode(3);
	assert(node3);
	BTNode* node4 = BuyNode(4);
	assert(node4);
	BTNode* node5 = BuyNode(5);
	assert(node5);
	BTNode* node6 = BuyNode(6);
	assert(node6);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;
}
void TreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	TreeDestory(root->left);
	TreeDestory(root->right);
	free(root);
	root = NULL;
}


void LevelOrder(BTNode * root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		printf("%d", front->data);
		QueuePop(&q);
		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	printf("\n");
	QueueDestory(&q);
}