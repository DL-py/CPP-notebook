#include <iostream>
using namespace std;
/*
函数模板：
1.函数模板：建立一个通用函数，其返回值类型和形参类型可以不具体指定
  用一个虚拟的类型来代表。
2.语法：
  template<typename T> 声明一个模板，告诉编译器T是通用数据类型
  //typename 可以替换成class 两者基本没有什么区别
3.函数模板的使用：
 1.自动类型推导
 2.显示指定类型 
*/
template <typename T>
void myswap(T &a, T &b)
{
	T temp;
	temp = b;
	b = a;
	a = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	myswap(a, b);//自动类型推导
	myswap<int>(a, b);//显示指定类型
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}