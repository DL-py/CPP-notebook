#include <iostream>
using namespace std;
/*
函数模板的注意事项：
1.自动类型推导，必须推导出一致的数据类型T才能使用
2.模板必须要确定出T的数据类型才可以使用
*/
template <class T>
void myswap(T & a, T & b)
{
	T temp;
	temp = b;
	b = a;
	a = temp;
}
template <class T>
void func()
{
	cout << "func()的调用" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//myswap(a, c);自动类型推导不一致
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
void test02()
{
	//func();模板必须要确定出T的数据类型才可以使用
	//此时无法进行自动推导
	func<int>();
}
int main()
{
	//test01();
	void test02();
	system("pause");
	return 0;
}