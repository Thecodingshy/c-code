//#define _CRT_SECURE_NO_WARNINGS
//
////写一个函数返回参数二进制中 1 的个数。
////比如： 15    0000 1111    4 个 1
//#include<stdio.h>
//
//int GetBinNum(int a)
//{
//	int count = 0;
//	for(int i=0;i<32;i++)
//	{
//		if (((a>>i) & 1 )== 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = 0;
//	ret=GetBinNum(a);
//	printf("%d ", ret);
//	return 0;
//}