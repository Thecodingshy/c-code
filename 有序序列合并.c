//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int m = 0, n = 0;  
//    scanf("%d %d", &m, &n);
//    int arr[m + n];
//    for (int i = 0; i <= m + n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int i = 0; i < m + n - 1; i++)
//    {
//        for (int j = 0; j < m + n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//    for (int i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}