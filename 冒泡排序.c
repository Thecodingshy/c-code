//#define _CRT_SECURE_NO_WARNINGS
////ц╟ещеепР
//
//#include<stdio.h>
//void Swap(int* a, int* b)
//{
//	int* tmp = a;
//	a = b;
//	b = tmp;
//}
//void BubbleSort(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j <sz-1-i; j++)
//		{			
//			if (arr[j] > arr[j + 1])
//			{
//				Swap(&arr[j], &arr[j + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}