//#define _CRT_SECURE_NO_WARNINGS
////����һ���������飬��ɶ�����Ĳ���
////
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include<stdio.h>
//void ArrInit(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void Reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	int arr3[3] = { 7,8,9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	ArrInit(arr1,sz);
//	
//	Reverse(arr3, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	Print(arr2, sz);
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}
