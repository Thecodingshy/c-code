#define _CRT_SECURE_NO_WARNINGS
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
#include<stdio.h>
double mypow(double  n, double k)//n ����  k�η���
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
	printf("������n��k==>");
	scanf("%lf %lf", &n, &k);

	double ret=mypow(n, k);
	printf("%lf ", ret);
	return 0;
}