//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;	//��֤�����1���ص�ֱ�Ӳ�������
//		for (int i = 0; i < n - gap; i++)
//		{
//			int end = i;
//			int tmp = a[end + gap];		//����a[end+gap]��ֵ�����жϽ���
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;//һ��break���ĳ��ڣ�һ��while()�����ĳ���
//		}
//	}
//}
//void Swap(int* a, int* b)
//{
//	int* tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void QuickSort(int *arr,int begin,int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int left = begin;
//	int right = end;
//	int keyi = left;
//	while (left > right);
//	{
//		while (left < right && arr[right] >= arr[keyi])//�ұ�������С
//		{
//			right--;
//		}
//		while (left < right && arr[left] <= arr[keyi])//��������Ҵ�
//		{
//			left++;
//		}
//		Swap(&arr[left], &arr[right]);
//	}
//	Swap(&arr[left], &arr[keyi]);
//	keyi = left;	
//	//���Ƶ��Ǳ��������ݹ�
//	QuickSort(arr, begin, keyi-1);	
//	QuickSort(arr, keyi+1, end);
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	ShellSort(arr,sz);
//	printf("%d", arr[sz - 1]);
//	printf("\n");
//	QuickSort(arr, 0, sz-1);
//	printf("%d ", arr[sz - 1]);
//	return 0;
//}