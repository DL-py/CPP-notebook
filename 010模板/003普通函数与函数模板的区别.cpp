#include<iostream>
using namespace std;
/*
普通函数与函数模板的区别：
1.普通函数在调用时可以发生自动类型转换（隐式类型转换）
2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
3.如果利用显示指定类型的方式，可以发生隐式类型转换
*/
int myAdd01(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;//发生了隐式类型转换：char -> int
}
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
   //cout << myAdd02(a, c) << endl;自动类型推导调用函数模板不能发生隐式类型转换
     cout << myAdd02<int>(a, c) << endl;//显示指定类型可以进行隐式类型转换
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}