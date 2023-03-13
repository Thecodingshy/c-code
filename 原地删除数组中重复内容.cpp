#include<stdio.h>
#include<assert.h>
int RemoveDuplicates(int * arr,int sz)
{
	if(sz==0)		//
	{				//
		return 0;	//
	}				//对于OJ题库来说 来骗OJ题库的测试用例 
	assert(arr);
	int pre=0;
	int cur=1;
	int ret=0;
	while(cur<sz)		
		{
			if(arr[pre] != arr[cur])	//两个指针指向内容不同 
				{
					arr[ret]=arr[cur];
					ret++;
					pre++;
					cur++;
				}
			else				//两个指针指向内容相同 
			{
				pre++;
				cur++;			 
			}
		}
		arr[ret]=arr[pre];
		ret++;
		return ret;	
}
int main()
{
	int arr[]={1,1,2,3,3,4,4,4,5,5,6,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret = 0;
	ret = RemoveDuplicates(arr,sz);
	printf("%d\n",ret);
	return NULL;
}
