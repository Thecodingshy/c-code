//#define _CRT_SECURE_NO_WARNINGS
////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#include<stdio.h>
//GetOdd(int a,int* arrOdd)
//{
//	for (int i = 0; i < 16; i++)
//	{
//		arrOdd[i] = (a & 1);
//		a = a >> 2;
//	}
//}
//GetEven(int a,int* arrEven)
//{
//	a = a >> 1;
//	for (int i = 0; i < 16; i++)
//	{
//		arrEven[i] = (a & 1);
//		a = a >> 2;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int arrOdd[16] = { 0 };
//	int arrEven[16] = { 0 };
//	GetOdd(a,&arrOdd);
//	GetEven(a,&arrEven);
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d ", arrOdd[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d ", arrEven[i]);
//	}
//	return 0;
//}