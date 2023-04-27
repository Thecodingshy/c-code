//#define _CRT_SECURE_NO_WARNINGS
////递归和非递归分别实现求第n个斐波那契数
////例如：
////输入：5  输出：5
////输入：10， 输出：55
////输入：2， 输出：1
//#include<stdio.h>
//int fib(int n)							//递归
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fibnonr(int n)						//非递归
//{
//	int a = 1, b = 1, c = 1;
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	
//	scanf("%d", &n);
//	int ret=fib(n);
//	printf("%d ", ret);
//
//	getchar();
//
//	int m = 0;
//	scanf("%d", &m);
//	int ret2 = fibnonr(m);
//	printf("%d ", ret2);	
//	return 0;
//}