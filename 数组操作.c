//#define _CRT_SECURE_NO_WARNINGS
////创建一个整形数组，完成对数组的操作
////
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////
////要求：自己设计以上函数的参数，返回值。
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
