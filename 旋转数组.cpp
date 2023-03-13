/*
	输入[1,2,3,4,5,6,7]		k=3		如果k>n 则 k=k%n 
	输出[5,6,7,1,2,3,4] 
方法一： 
		每次旋转一个，保存最后一个，前n-1个数以此往后挪动
		最后一个数放到第一个位置上去
		O（n*k） 
方法二：
		开辟一个k大小的临时数组，后k个跟前k个倒一下 
		时间复杂度O (n)
		空间复杂度O（k） 
方法三：（2+1次逆置法） 
*/
#include<stdio.h> 
void reverse(int*arr, int  left,  int right)
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
void rotate(int *nums,int numSize,int k)
{
	reverse(nums,0,numSize-k-1);
	reverse(nums,numSize-k,numSize-1);
	reverse(nums,0,numSize-1);

 } 

