//#define _CRT_SECURE_NO_WARNINGS
////描述
////输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
////
////数据范围： 3≤n≤50 3≤n≤50  序列中的值都满足 1≤val≤100 1≤val≤100
////输入描述：
////第一行输入一个整数N(3≤N≤50)。
////第二行输入N个整数，用空格分隔N个整数。
////输出描述：
////输出为一行，如果序列有序输出sorted，否则输出unsorted。
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[50];
//    int flag1 = 0;
//    int flag2 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > arr[i + 1])
//            flag1 = 1;
//        else if (arr[i] < arr[i + 1])
//            flag2 = 1;
//    }
//    if (flag1 && flag2)
//        printf("unsorted");
//    else
//        printf("sorted");
//    return 0;
//}