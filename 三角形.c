#define _CRT_SECURE_NO_WARNINGS
/*
输入描述：
题目有多组输入数据，每一行输入三个a，b，c(0<a,b,c<1000)，作为三角形的三个边，用空格分隔。
输出描述：
针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，
等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，
反之输出“Not a triangle!”
*/
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (scanf("%d, %d, %d", &a, &b, &c) != EOF)
//	{
//		if (a + b <= c && a + c <= b)
//		{
//			printf("Not a triangle!\n");
//		}
//		else
//		{
//			if (a == b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b) || (a == c) || (b == c))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
    int a = 1, b = 1, c = 1;

    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if (a == b || b == c || a == c)
            {
                printf("Isosceles triangle!\n");
            }
            else
            {
                printf("Ordinary triangle!\n");
            }
        }
        else
        {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}