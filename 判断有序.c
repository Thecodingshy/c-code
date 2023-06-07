#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    //int arr[n];//变长数组
//    int arr[50] = { 0 };
//    //输入数据
//    //判断是否有序
//    int flag1 = 0;
//    int flag2 = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i >= 1)
//        {
//            if (arr[i] < arr[i - 1])
//                flag1 = 1;
//            else if (arr[i] > arr[i - 1])
//                flag2 = 1;
//        }
//    }
//    if (flag1 + flag2 == 2)
//        printf("unsorted\n");
//    else
//        printf("sorted\n");
//    return 0;
//}