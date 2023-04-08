#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float weight, height;
    scanf("%f %f", &weight, &height);
    printf("%.2f", weight / ((height / 100) * (height / 100)));
    return 0;
}