//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//
//    //�䳤����
//    int arr1[1000];
//    int arr2[1000];
//    int i = 0;
//    //��һ������
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //�ڶ�������
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //�ϲ�
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
//        //arr1�������ˣ���Ҫ��arr2��ʣ���Ԫ��ȫ������arr3��
//        while (j < m)
//        {
//            arr3[k++] = arr2[j++];
//        }
//    }
//    else
//    {
//        //arr2�������ˣ���Ҫ��arr1��ʣ���Ԫ��ȫ������arr3��
//        while (i < n)
//        {
//            arr3[k++] = arr1[i++];
//        }
//    }
//
//    //���
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//
//    return 0;
//}