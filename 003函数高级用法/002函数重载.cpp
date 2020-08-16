#include <iostream>
using namespace std;
/*
函数重载：提高函数的复用性
1.类型相同、作用域相同、函数名相同、返回值相同
2.参数不同：数目、类型、顺序
3.重载的形式有很多种，但是要保证重载之间不能发生冲突
*/

//void func()
//{
//	cout << "调用func()" << endl;
//}

//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}

//void func(int& a)//引用作为重载
//{
//	cout << "调用func(int& a)" << endl;
//}

//void func(const int& a)
//{
//	cout << "调用func(const int& a)" << endl;
//}

void func(int a=10)
{
	cout << "调用void func(int a=10)" << endl;
}

int main()
{
	int a;
	func();
	system("pause");
	return 0;
}