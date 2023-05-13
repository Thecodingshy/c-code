#define _CRT_SECURE_NO_WARNINGS
////多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
////输出描述：
////针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//#include<stdio.h>
//int main()
//{
//    int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    int year;
//    int day;
//    int days;
//    while (scanf("%d %d", &year, &day) != EOF)
//    {
//        days = arr[day - 1];
//        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//        {
//            if (day == 2)
//            {
//                days++;
//            }
//        }
//        printf("%d\n", days);
//    }
//    return 0;
//}