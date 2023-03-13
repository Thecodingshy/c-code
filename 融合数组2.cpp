#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
int main()
{
	int num1[]={1,2,3,6,10,0,0,0};
	int num2[]={2,2,6};
	int m=5,n=3;
	int *tmp=(int *)malloc(sizeof(int)*(m+n));
	int i1=0,i2=0,i3=0;
	while(i1<m && i2<n)
	{
		if(num1[i1]<num2[i2])
		{
			tmp[i3]=num1[i1];
			i1++;
			i3++;
		}
		else
		{
			tmp[i3]=num2[i2];
			i3++;
			i2++;
		}
	}
	while(i1<m)			//i1没到尾部 
	{
		tmp[i3]=num1[i1];
		i3++;
		i1++;
	}
	while(i2<n)			//
	{
		tmp[i3]=num2[i2];
		i3++;
		i2++;
	}
	memcpy(num1,tmp,sizeof(int)*(m+n));
	free(tmp);
	for(int i1=0;i1<=(n+m-1);i1++)
	{
		printf("%d ",num1[i1]);
	}
	return 0;  
}
//有O（N+N）的空间复杂度 
