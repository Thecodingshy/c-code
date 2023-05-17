//#define _CRT_SECURE_NO_WARNINGS
//
////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int Sum(int n)
//{
//	int sum = 0;
//	int m = n;
//	int count = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		 sum = 10 * sum + m;
//		 count = count + sum;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("请输入进行累加的数字;>");
//	scanf("%d", &a);
//	int sum=Sum(a);
//	printf("%d ", sum);
//	return 0;
//}