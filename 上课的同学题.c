#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 2;
	printf("%d %d %d", i *= 2, ++i, i++);		//
	return 0;
}