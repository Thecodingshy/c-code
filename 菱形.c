//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//void Print(int n)
//{
//	int k = n / 2;
//	for (int j = 0; j < k; j++)				//打印上半
//	{
//		for (int i = j; i <k; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 0; i < 2*j + 1; i++)
//		{
//			printf("*");
//		}
//		printf("\n");		
//	}
//
//
//	for (int i = 0; i < n; i++)				//打印中间
//	{
//		printf("*");
//	}
//	printf("\n");
//
//
//	for (int j = 0; j < k; j++)
//	{
//		for (int i = 0; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int l = 0; l < 2 * k - 2*j - 1; l++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("你设置的最长的*符号的个数:>\n");
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}