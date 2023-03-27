#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void Text1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q))
	{
		QDataType front = QueueFront(&q);
		printf("%d  ", front);
		QueuePop(&q);
	}
	printf("\n");
}
int main()
{
	Text1();


	return 0;
}