#define _CRT_SECURE_NO_WARNINGS
////�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
////���������
////���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
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