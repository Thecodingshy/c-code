#include<stdio.h>
#include<stdlib.h>
int *addToArrForm(int *A,int Asize,int K,int* returnSize)//int* returnSize(输出型参数) 
{
	int ksize=0;
	int kNum=K;
	while(kNum)
	{
		ksize++;
		kNum=kNum/10;
	}
	
	int len=kNum > Asize ?kNum : Asize;
	int *retArr =(int*)malloc(sizeof(int)*(len+1));
//	printf("%d\n",len);
	int Ai=Asize-1;	
	int next=0; //进位 
	int reti=0;
	while(len--)
	{
		int a=0;
		if(Ai>=0)
		{
			a=A[Ai];
			Ai--;
		}
		int ret=A[a]+K%10+next;
		K=K/10;
		{
			if(ret>9)
			{
				ret=ret-10;
				next=1;
			}
			else
			{
				next=0;
			}
			
			retArr[reti]=ret;
			reti++;
		}
	}
	
	if(next==1)
	{
		retArr[reti] = 1;
		++reti;
	}
	int left=0;
	int right=reti;
	while(left<right)
	{
		int tmp=retArr[left];
		retArr[left]= retArr[right];
		retArr[right]= tmp;
		left++;
		right--;
	}
	*returnSize =reti;
	return retArr; 
}
int main()
{
	int arr[]={5,6};
	int k=54;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int* returnSize=p;
	int* ret=addToArrForm(arr,sz,k,p);
	
	
	printf("%d\n",&ret);
	
	return 0;
}
