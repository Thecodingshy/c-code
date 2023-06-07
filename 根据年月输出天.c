#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int get_days_of_month(int y, int m)
//{
//    int d = 0;
//    int days[] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//    d = days[m];
//    if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && m == 2)
//        d += 1;
//    return d;
//}
//
//int main()
//{
//    int y = 0;
//    int m = 0;
//
//    while (scanf("%d %d", &y, &m) == 2)
//    {
//        int d = get_days_of_month(y, m);
//        printf("%d\n", d);
//    }
//
//    return 0;
//}