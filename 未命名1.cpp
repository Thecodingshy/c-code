#include<stdio.h>
int main()
{
	int *p;
	int  a[5]={4,3,6,51};
	p=a;
	printf("%d,%d",*p++,(*p)++);
	return 0;
 } 
