//#define _CRT_SECURE_NO_WARNINGS
////递归方式实现打印一个整数的每一位
//#include<stdio.h>
//void Print1(num)
//{
//	if (num == 0)
//	{
//		return num;
//	}
//	int n = num % 10;
//	Print1(num / 10);
//	printf("%d ", n);
//}
//void Print2(int num)
//{
//	if (num > 9)
//		Print2(num / 10);
//	printf("%d ",num % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print1(num);
//	printf("\n");
//	Print2(num);
//	return 0;
//}