//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int  MyStrlen1(char* s)		//6		最正确的写法
//{
//	char* start = s;
//	while (* s)
//	{
//		s++;
//	}
//	return s - start;
//}
//int  MyStrlen2(char* s)		//7	    ++的优先级比*高但因为++是后置的，所以++效果没有立即产生先解引用然后进行判断，完事了s++了
//{							//		最后判断出来\0了但是由于我即使要退出循环，也要后置++一下	最终s会停留在 \0后面
//	char* start = s;
//	while (* s++)
//	{
//		;					
//	}
//	return s - start;
//}
//int  MyStrlen3(char* s)		//6		先++，后解引用判断是否是 \0，这种情况相当于我忽略了首元素的内容，并没有对首元素进行解引用判断 (虽然正确但，如果结束条件不是\0 会有风险)
//{							//		但最终s会停留在	\0前面
//	char* start = s;
//	while (* ++s)
//	{
//		;
//	}
//	return s - start ;
//}
//int main()
//{	//char arr[]="abcdef";
//	char arr[] = { '\0','a','b','c','d','f','\0'};	//对len3进行测试
//	int len1 = MyStrlen1(arr);	//无懈可击的写法 0
//	int len2 = MyStrlen2(arr);	//画蛇添足了 1
//	int len3 = MyStrlen3(arr);	//忽视对首元素的判断 6
//	printf("%d\n%d\n%d\n ", len1, len2, len3);
//}