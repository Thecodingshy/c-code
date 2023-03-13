#include<stdio.h>
#include<stdlib.h>
int *addArrandint(int *A,int Asize,int K,int *returnSize)
{
	int Ksize=0;
	int KNum=K;
	while(KNum)
	{
		KNum=KNum/10;
		Ksize++;
	}
	int len=Asize>Ksize ? Asize  : Ksize;
	int *Arrret =(int *)malloc(sizeof(int)*(len+1)); //找到数组和整数那个长考虑进一，因为n位数+n位数可能是n+1位数，所以动态开辟n+1个空间 	
	int Ai=Asize-1;		
	int Nextnum=0;		//ret如果大于10 的话要进行逢十进一 
	int reti=0;
	while(len--)
	{
		int a=0;
		if(Ai>=0)     //考虑到数组越界的问题，万一数字长度大于数组长度。 Ai 是 
		{
			a=A[Ai];
			Ai--;
		}
		int ret = a+K%10+Nextnum;
		K=K/10; 		//最后一位K加完后前移一位 
		if(ret>9)
			{
				ret=ret-10;
				Nextnum=1;
			}
		else
			{
				Nextnum=0;
			}
		Arrret[reti]=ret;
		reti=reti+1;
	}
	if(Nextnum==1)                    
	{
		Arrret[reti]=1;
		reti=reti+1;
	}
	int left=0;
	int right=reti-1;			//由于Arrret是倒着存的，所以要逆置 
	while(left<right)
	{
		int tmp=Arrret[left];
		Arrret[left]=Arrret[right];
		Arrret[right]=tmp;
		left++;
		right--;
	}
	*returnSize=reti;  //4
	return Arrret;		//abcd 
}
int main()
{
	int arr[]={2,6,5,7};
	int K=54;
	int Asize=sizeof(arr)/sizeof(arr[0]);
	int* reti;
	addArrandint(arr,Asize,K,reti);
	printf("%d\n",reti);
	
	return 0;	
} 
