#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
void merge(int *num1,int num1Size,int m,int* num2,int num2Size,int n)
{
	int* tmp=(int *)malloc(sizeof(int)*(m+n));
	int i1=0,i2=0,i=0;
	while(i1<m && i2<n)
	{
		if(num1[i1]<num2[i2])
		{
			tmp[i]=num1[i1];
			i1++;
			i++;
		}
		else
		{
			tmp[i]=num2[i2];
			i2++;
			i++;
		}
	}
	if(i1<m)		//说明i1 还没到尾部 
	{
		tmp[i]=num1[i1];
		i++;
		num1++; 
	}
	if(i2<n)
	{
		tmp[i]=num2[i2];
		i++;
		num2++;
	}
	memcpy(num1,tmp,sizeof(int)*(m+n));
}
