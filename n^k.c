#define _CRT_SECURE_NO_WARNINGS
//编写一个函数实现n的k次方，使用递归实现。
#include<stdio.h>
double mypow(double  n, double k)//n 底数  k次方数
{
	if (k < 0)
	{
		return (1.0 / mypow(n, -k));
	}
	else if (k == 0)
		return 1;
	else
		return (mypow(n, k - 1))*n;
}
int main()
{
	double n = 0, k = 0;
	printf("请输入n和k==>");
	scanf("%lf %lf", &n, &k);

	double ret=mypow(n, k);
	printf("%lf ", ret);
	return 0;
}