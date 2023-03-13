#include<stdio.h>
#include<assert.h>
int RemoveElement(int *const arr ,int val,int sz)
{
	assert(arr);
	int src=0;
	int dst=0;
	while(src<sz)
	{
		if(arr[src] != val)
		    {
	    		arr[dst]=arr[src];
			    dst++;
			    src++;
			}
		else
			src++;
	}
	return dst;
}
int main()
{
	int arr[]={1,3,5,6,3,2,3,6};
	int val = 3;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int ret=0;
	ret = RemoveElement (arr,  val, sz);
	printf("%d\n",ret); 
	return 0;
 } 
