//#define _CRT_SECURE_NO_WARNINGS
////����
////����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
////
////���ݷ�Χ�� 3��n��50 3��n��50  �����е�ֵ������ 1��val��100 1��val��100
////����������
////��һ������һ������N(3��N��50)��
////�ڶ�������N���������ÿո�ָ�N��������
////���������
////���Ϊһ�У���������������sorted���������unsorted��
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