//#define _CRT_SECURE_NO_WARNINGS
////调整数组使奇数全部都位于偶数前面。
////题目：
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
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