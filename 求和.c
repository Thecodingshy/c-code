#define _CRT_SECURE_NO_WARNINGS
/*
写一个函数求两个整数的较大值
如：
输入：10 20
输出较大值：20
*/

#include<stdio.h>
int Cmp(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int max=Cmp(a, b);
	printf("%d", max);
	return 0;
}
