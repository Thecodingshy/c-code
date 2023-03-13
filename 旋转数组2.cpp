#include<stdio.h> 
void reverse(int*arr,int left,int right)
{
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=arr[left];
		left++;
		right--;
	}
}
int main()
{
	int nums[]={1,2,3,7,6,2,4,5,7,6};
	int numSize=sizeof(nums)/sizeof(nums[0]);  //10
	int k=3;
	reverse(nums,0,numSize-k-1);
	reverse(nums,numSize-k,numSize-1);
	reverse(nums,0,numSize-1);
	return 0;
 } 
