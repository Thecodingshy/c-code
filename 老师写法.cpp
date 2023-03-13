#include<stdlib.h>
int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
{
    int number = k;
    int ksize = 0;//k长度 
    int next = 0;//进位
    while (number)//计算k得位数
    {
        ksize++; 	
        number /= 10;
    }
    int asize = numSize > ksize ? numSize + 1 : ksize + 1;//原数组长度+1
    int* retarr = (int *)calloc(asize, sizeof(int));//指向返回数组
    int retSize = 0;//临时数组下标
    while (numSize > 0 && ksize > 0)//数组和k相加
    {
        retarr[retSize++] = (num[numSize - 1] + (k % 10) + next) % 10;
        if ((num[numSize - 1] + (k % 10) + next) >= 10)
        {
            next = 1;
        }
        else
        {
            next = 0;
        }
        k /= 10;
        ksize--;
        numSize--;
    }

    if (next == 1 && numSize <= 0 && ksize <= 0)//当最后得相加进位了且数组无剩余数字、k没有高位保留时，将next再加到retarr中
    {
        retarr[retSize++] = next;
        next = 0;
    }
    else//当数组有剩余数字或k有高位保留时
    {
        while (numSize > 0)//数组中还有剩余数字
        {
            retarr[retSize++] = (num[numSize - 1] + next) % 10
            if ((num[numSize - 1] + next) >= 10)
            next = 1;
            else
            next = 0;
            numSize--;
        }
        while(ksize > 0)//k还有高位保留
        {
            retarr[retSize++] = (k % 10 + next) % 10;
            if (k % 10 + next >= 10)
            next = 1;
            else
            next = 0;
            k /= 10;
            ksize--;
        }
    }    
    //循环结束后再判断是否有进位
    if (next == 1)
    {
        retarr[retSize++] = 1;
    }   
    *returnSize = retSize;
    //逆置数组
    int left = 0;
    int right = retSize - 1;
    while (left <= right)
    {
        int tmp = retarr[left];
        retarr[left] = retarr[right];
        retarr[right] = tmp;
        left++;
        right--;
    }
    return retarr;

}

