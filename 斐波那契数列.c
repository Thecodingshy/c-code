//#define _CRT_SECURE_NO_WARNINGS
////�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
////���磺
////���룺5  �����5
////���룺10�� �����55
////���룺2�� �����1
//#include<stdio.h>
//int fib(int n)							//�ݹ�
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fibnonr(int n)						//�ǵݹ�
//{
//	int a = 1, b = 1, c = 1;
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	
//	scanf("%d", &n);
//	int ret=fib(n);
//	printf("%d ", ret);
//
//	getchar();
//
//	int m = 0;
//	scanf("%d", &m);
//	int ret2 = fibnonr(m);
//	printf("%d ", ret2);	
//	return 0;
//}