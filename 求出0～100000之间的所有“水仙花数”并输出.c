//#define _CRT_SECURE_NO_WARNINGS
////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int n = i;
//		while (n>0)
//		{
//			int radix = n % 10;
//			int pows = pow(radix, 3);
//			sum = sum + pows;
//			n = n / 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}