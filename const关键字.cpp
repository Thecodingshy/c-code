#include<stdio.h>
int main ()
{
	int a=10;
	int b=20;
	const int *p=&a; //const修饰 *p 
	p=&b;			//p可以更改 
//	*p =100 //err
	
	int *const p1 =&a; //const 修饰变量p 
	*p1=30;
//	p1=&b //err
			
	printf("%d\n",*p);	//20
	printf("%d\n",*p1);	//30 
	return 0;
 } 
