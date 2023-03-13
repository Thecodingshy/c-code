#include<stdio.h>
int main()
{
	int arr[]={3,0,3,6,15,6,0,2,3};
	int sz= sizeof(arr)/sizeof(arr[0]); //4
							
	int count = 0;
	int Ai=sz-1;
	while(sz--)
	{
		count=count+arr[Ai] ;
		Ai=Ai-1;
		
	}
	printf("%d\n",count);
	return 0;
}
