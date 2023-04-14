#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//先考虑清楚插入排序的一趟排序
void InserSort1(int* a, int n)
{
	int end;
	int tmp = a[end + 1];
	while (end >= 0)
	{
		if (tmp < a[end])
		{
			a[end + 1] = a[end];
			end--;
		}
		else
		{
			break;
		}
	}
	a[end + 1] = tmp;			//走到这两种情况 1：end--走到头了下标【-1】，说明还没找到比我小的那么我就是最小的直接换
								//				 2：找到对应位置直接入当前下标【end+1】的位置	
}


//把插入排序进行完善，目的是将
void InserSort2(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

//思路：层层递进
//1----先把排序折成单趟，（前面有序，把随后的end+1里的值选择替换前面的位置（就是相当于end后移））
//2----然后我在控制这个end,end是从0，1，2，3，...n-2把一个一个插入进去

//插入排序的时间复杂度：O（n^2）
//逆序最坏
//最优：顺序有序/接近顺序有序

//----------------------------------------------------------------

//希尔排序：对插入排序进行改进
//第一步：预排序（接近顺序有序）
//第二步：直接插入排序（有序）

//分组插入预排
//希尔排序单趟
void ShellSort1(int* a, int n)
{
	int gap;	//先不处理
	int end;	//先不处理
	int tmp = a[end + gap];
	while (end>=0)
	{
		if (tmp < a[end])
		{
			a[end + 1] = a[end];
			end-=gap;
		}
		else
		{
			break;
		}
	}
	a[end + gap] = tmp;
}

//接下来要控制end(下标)来实现一组(由gap决定的)数据的插入

void ShellSort2(int* a, int n)
{
	int gap;		//先不处理
	for (int i = 0; i < n - gap; i += gap)
	{
		int end = i;
		int tmp = a[end + gap];
		while (end<=0)
		{
			if (tmp < a[end])
			{
				a[end + gap] = a[end];
				end -= gap;
			}
			else 
			{
				break;
			}
		}
		a[end + gap] = tmp;
	}
}

//既然我已经控制了end[0]end[0+gap]....间隔为gap的一组，那么我们去控制其他组达到控制数组全部内容的即end[1]end[1+gap]....
//如下   这时候我们假设gap等于3

void ShellSort2(int* a, int n)
{
	int gap = 3;

	for (int j = 0; j < n - gap; j++)		//也只是控制了一组数据也就对应a[0]-->a[0+gap]-->a[0+gap*2]
																		//a[0],a[3],a[6]...直到括号内数字小于n-gup(n-3)
	{
		for (int i = j; i < n - gap; i += gap)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end - gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}


//在这里我们进行一下总结
//排升序：如果我给的gap越大，大的数字可以更快的到后面，小的数可以更快的到前面但是并步接近有序
//排升序：如果我给的gap越小，越接近有序
//		当gap=1时候，也就是我开始提到的插入排序

//我绝的上面的写法循环是不是太多了
//好的接下来我们对它进行改进让gap和我们数组的n相关

void ShellSort3(int* a, int n)
{
	int gap = n;
								
	while (gap > 1)
	{
		gap = n / 3 + 1;		//这里我可以控制每次gap的值，后面的+1保证了gap不能取到0；
												//for (int i = 0; i < n - gap; i += gap){} 我们这里把外层循环给去掉了，简洁
		for (int i = 0; i < n - gap; i++)		//这里我们不难想到我每排完一趟，我的gep越小，我的数字序列更加有序，
												//我的相对来说我排的更加快，不理解这句话的可以看看前面的总结,gap组数据交替插入排序
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + 1] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}
