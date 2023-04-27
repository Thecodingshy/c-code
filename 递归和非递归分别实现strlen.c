//#define _CRT_SECURE_NO_WARNINGS
////递归和非递归分别实现strlen
//#include<stdio.h>
////int MyStrlen(char* str)
////{
////	if(*str != '\0')
////	{
////		return 1+MyStrlen(str - 1);
////	}
////	else
////	{
////		return 0;
////	}
////
////}
////MyStrlenNonR(char* str)
////{
////	int count = 0;
////	while(* str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////int main()
////{
////	char str[] = "ABCDEFG";
////	int len1=MyStrlen(str);
////	int len2=MyStrlenNonR(str);
////	printf("%d", len2);
////	printf("\n");
////	printf("%d", len2);
////	return 0;
////}
//
//
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//
//int main()
//{
//	char arr[] = "abc";
////	//[a b c \0]
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}