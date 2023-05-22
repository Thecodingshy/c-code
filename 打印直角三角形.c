//#define _CRT_SECURE_NO_WARNINGS
////描述
////KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的带空格直角三角形图案。
////输入描述：
////多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“ * ”的数量，也表示输出行数。
////输出描述：
////针对每行输入，输出用“ * ”组成的对应长度的直角三角形，每个“ * ”后面有一个空格。
//#include<stdio.h>
////
////void PrintRightTriangle(int s)		//5
////{
////
////	for (int j = 0; j < s - 1; j++)
////	{
////		for (int i = s - 1; i > j; i--)
////		{
////			printf("  ");
////		}
////		for (int k = 0; k <= j; k++)
////		{
////			printf("* ");
////		}
////		printf("\n");
////	}
////	for (int i = 0; i < s; i++)
////	{
////		printf("* ");
////	}
////}
////int main()
////{
////	int i = 0;
////	scanf("%d", &i);
////	PrintRightTriangle(i);
////	return 0;
////}
//
//void PrintRightTriangle(int s)		//5
//{
//
//	for (int j = 0; j < s - 1; j++)
//	{
//		for (int i = s - 1; i > j; i--)
//		{
//			printf("  ");
//		}
//		for (int k = 0; k <= j; k++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < s; i++)
//	{
//		printf("* ");
//	}
//}
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		PrintRightTriangle(i);
//		getchar();
//	}
//
//	return 0;
//}