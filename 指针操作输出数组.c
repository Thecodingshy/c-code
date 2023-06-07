#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void print(float* p, int sz)
//{
//    float* q = p + sz;
//
//    while (p < q)
//    {
//        printf("%f ", *p++);    //IEE754表示我这个9没办法精确
//    }
//}
//int main()
//{
//    float arr[] = { 3.14f, 99.9f ,66.5f, 0.0f };
//    //99.9
//    //xx.1xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//    int i = 0;
//    float* p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(arr, sz);
//    return 0;
//}