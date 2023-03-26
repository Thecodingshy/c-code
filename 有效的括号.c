#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef char STDataType;
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


bool isValid(char* s)
{
	ST st;
	StackInit(&st);
	while (*s)
	{
		if (*s == '(' ||
			*s == '{' ||
			*s == '[')
		{
			StackPush(&st, *s);
			s++;
		}
		else
		{
			//如果给的测试用例为右括号，则栈里面没有值不能删
			//说明前面没有左括号，不匹配，返回false
			if (*s == '[' || *s == '{' || *s == '(')
			{
				StackDestory(&st);
				return false;
			}
			STDataType top = StackTop(&st);
			StackPop(&st);						//删数据时候考虑清楚
			if ((*s == '}' && top != "{")		//把拿结果的情况弄出来
				|| (*s == ')' && top != '(')
				|| (*s == ']' && top != '[')
				)
			{
				StackDestory(&st);				//内存泄漏
				return false;					//上面三种情况（入栈和出栈情况不匹配）返回false
			}
			else
			{
				s++;
			}
		}
	}
	bool ret = StackEmpty(&st);					//看一下栈是否为空，空说明匹配完了，
												//不为空，说明栈里面左括号还有剩余,返回false
	StackDestory(&st);
	return ret;
}