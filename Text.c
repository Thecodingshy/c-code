#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"

void TestStack1()
{
	ST st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);

	printf("%d", StackTop(&st));

	StackDestory(&st);
}
void TestStack2()
{
	ST st;
	StackInit(&st);

	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);

	printf("%d ", StackTop(&st));	//先出4
	StackPop(&st);
	printf("%d ", StackTop(&st));	//再出3
	StackPop(&st);

	StackPush(&st, 5);
	StackPush(&st, 6);
	StackPush(&st, 7);

	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}

	StackDestory(&st);
}
int main()
{
	//TestStack1();
	TestStack2();
	return 0;
}