//#define _CRT_SECURE_NO_WARNINGS
////��������ʹ����ȫ����λ��ż��ǰ�档
////��Ŀ��
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
//
//
//#include<stdio.h>
//void Adjust(int* arr, int sz)
//{
//	int arrtmp[FOPEN_MAX] = { 0 };
//	int* p = arr;
//	int left = 0;
//	int right = sz - 1;
//	for (int i = 0; i < sz; i++)
//	{
//		if ( arr[i] % 2 == 0)
//		{
//			arrtmp[right] = arr[i];
//			right--;
//		}
//		if (arr[i] % 2 == 1)
//		{
//			arrtmp[left] = arr[i];
//			left++;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arrtmp[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Adjust(arr, sz);
//	return 0;
//}