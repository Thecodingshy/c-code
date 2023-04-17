#define _CRT_SECURE_NO_WARNINGS
/*
给定两个数，求这两个数的最大公约数
例如：
输入：20 40
输出：20
*/
#include<stdio.h>
//int divi_0(int x, int y)
//{
//	if (x < y)		//使左边大右边小
//	{
//		int tmp = y;
//		y = x;
//		x = tmp;
//	}
//	for (int i = y; i >= 1; i--)
//	{
//		if (x % i == 0 && y % i == 0)
//		{
//			return i;
//		}
//	}
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int i=divi_0(a, b);
//	printf("%d ", i);
//	return 0;
//}