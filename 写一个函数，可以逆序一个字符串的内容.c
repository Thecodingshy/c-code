//#define _CRT_SECURE_NO_WARNINGS
////写一个函数，可以逆序一个字符串的内容。
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//void ReversePrint(char* string)
//{
//    if (*string != '\0')
//    {
//        string = string + 1;
//        ReversePrint(string);
//        printf("%c", *(string - 1));
//    }
//}
//int main() {
//    char str[100];
//    printf("Enter a string: \n");
//
//// 法一
//    //fgets(str, 100, stdin); 123\n
//    //printf("lenght =  %d\n",strlen(str));
//    //str[strlen(str)-1] = 0;       //去掉末尾
//    //printf("lenght =  %d\n", strlen(str));
//            
////  法二
//    //gets(str);123
//     
////  法三
//    scanf("%[^\n]",str);          //输入当我遇到 \n 停止接收，后面即使有内容也不去操作
//    //scanf("%[^0123456789]",str);  //输入当我遇到 数字 停止接收，后面即使有内容也不去操作
//
//    printf("You entered: %s\n", str);
//    ReversePrint(str);
//    return 0;
//}