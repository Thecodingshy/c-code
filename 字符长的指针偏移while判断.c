//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int  MyStrlen1(char* s)		//6		����ȷ��д��
//{
//	char* start = s;
//	while (* s)
//	{
//		s++;
//	}
//	return s - start;
//}
//int  MyStrlen2(char* s)		//7	    ++�����ȼ���*�ߵ���Ϊ++�Ǻ��õģ�����++Ч��û�����������Ƚ�����Ȼ������жϣ�������s++��
//{							//		����жϳ���\0�˵��������Ҽ�ʹҪ�˳�ѭ����ҲҪ����++һ��	����s��ͣ���� \0����
//	char* start = s;
//	while (* s++)
//	{
//		;					
//	}
//	return s - start;
//}
//int  MyStrlen3(char* s)		//6		��++����������ж��Ƿ��� \0����������൱���Һ�������Ԫ�ص����ݣ���û�ж���Ԫ�ؽ��н������ж� (��Ȼ��ȷ�������������������\0 ���з���)
//{							//		������s��ͣ����	\0ǰ��
//	char* start = s;
//	while (* ++s)
//	{
//		;
//	}
//	return s - start ;
//}
//int main()
//{	//char arr[]="abcdef";
//	char arr[] = { '\0','a','b','c','d','f','\0'};	//��len3���в���
//	int len1 = MyStrlen1(arr);	//��и�ɻ���д�� 0
//	int len2 = MyStrlen2(arr);	//���������� 1
//	int len3 = MyStrlen3(arr);	//���Ӷ���Ԫ�ص��ж� 6
//	printf("%d\n%d\n%d\n ", len1, len2, len3);
//}