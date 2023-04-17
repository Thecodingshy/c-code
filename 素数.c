//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#define NUM 300
//int main()
//{
//	//建立一个bool类型的数组，用来存放该数组下标所对应的数是否为素数；是素数则存储true，否则存储false。
//	bool is_prime[NUM] = { 0 };
//	int i = 0;
//	//初始化bool数组
//	for (i = 0; i < NUM; i++)
//	{
//		is_prime[i] = true;
//	}
//	printf("1——200之间素数为：\n");
//	//排查掉不是素数的数，并输出素数
//	for (i = 2; i <= 200; i++)
//	{
//		if (is_prime[i])
//		{			
//			int j = 0;
//			printf("%d ", i);
//			for (j = i + i; j <= 200; j += i)//从i+i开始筛i的倍数
//				{
//					is_prime[j] = false;
//				}
//		}
//	}
//	return 0;
//}
