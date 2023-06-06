#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//int*
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		return 1;
//	else
//		return 0;
//}

////小端返回1
////大端返回0
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}