//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdbool.h>
//#define NUM 300
//int main()
//{
//	//����һ��bool���͵����飬������Ÿ������±�����Ӧ�����Ƿ�Ϊ��������������洢true������洢false��
//	bool is_prime[NUM] = { 0 };
//	int i = 0;
//	//��ʼ��bool����
//	for (i = 0; i < NUM; i++)
//	{
//		is_prime[i] = true;
//	}
//	printf("1����200֮������Ϊ��\n");
//	//�Ų�������������������������
//	for (i = 2; i <= 200; i++)
//	{
//		if (is_prime[i])
//		{			
//			int j = 0;
//			printf("%d ", i);
//			for (j = i + i; j <= 200; j += i)//��i+i��ʼɸi�ı���
//				{
//					is_prime[j] = false;
//				}
//		}
//	}
//	return 0;
//}
