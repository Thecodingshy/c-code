//#define _CRT_SECURE_NO_WARNINGS
////дһ����������������һ���ַ��������ݡ�
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
//// ��һ
//    //fgets(str, 100, stdin); 123\n
//    //printf("lenght =  %d\n",strlen(str));
//    //str[strlen(str)-1] = 0;       //ȥ��ĩβ
//    //printf("lenght =  %d\n", strlen(str));
//            
////  ����
//    //gets(str);123
//     
////  ����
//    scanf("%[^\n]",str);          //���뵱������ \n ֹͣ���գ����漴ʹ������Ҳ��ȥ����
//    //scanf("%[^0123456789]",str);  //���뵱������ ���� ֹͣ���գ����漴ʹ������Ҳ��ȥ����
//
//    printf("You entered: %s\n", str);
//    ReversePrint(str);
//    return 0;
//}