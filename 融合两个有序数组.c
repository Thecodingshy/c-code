//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//
//    //变长数组
//    int arr1[1000];
//    int arr2[1000];
//    int i = 0;
//    //第一行数据
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //第二行数据
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并
//    int arr3[2000];
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k++] = arr1[i++];
//        }
//        else
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    if (i == n)
//    {
//        //arr1遍历完了，需要将arr2中剩余的元素全部放在arr3中
//        while (j < m)
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    else
//    {
//        //arr2遍历完了，需要将arr1中剩余的元素全部放在arr3中
//        while (i < n)
//        {
//            arr3[k++] = arr1[i++];
//        }
//    }
//
//    //输出
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}