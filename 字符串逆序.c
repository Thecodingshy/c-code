//#define _CRT_SECURE_NO_WARNINGS
////编写一个函数 reverse_string(char* string)（递归实现）
////实现：将参数字符串中的字符反向排列，不是逆序打印。
////要求：不能使用C函数库中的字符串操作函数。
//#include<stdio.h>
//void reverse_string(char* string) 
//{
//    if (*string != '\0')
//    {
//        string++;       //指针偏移
//        reverse_string(string);
//        printf("%c",*(string-1));
//    }
//}
//
//int main() 
//{
//
//    char *str = "ABCDEFG";
//    reverse_string(str);
//    return 0;
//}