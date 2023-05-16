//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 1;
//	double b = 2.1;
//	auto c = a + b;	//因为从类型大小是8就知道是double	存在隐式转化
//	cout << sizeof(c) << endl << typeid(c).name() << endl << c << endl;		//  8   double   3.1
//	return 0;
//}
////类似
////%g是一个很好用的格式符，在很多时候可以方便我们。
////在输出的时候我们使用% g会有什么样的奇特用法呢，比如我们想要输出一个12.3，但是如果你选择使用 % f作为格式符，
////就会输出12.300000。但是很多时候我们只想要打印出12.3，这个时候可以选择 % g进行格式化，输出结果就会变成12.3。
////它将后面无用的0全部舍去了，可以在很多时候满足题目的要求。
////