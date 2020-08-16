#include <iostream>
using namespace std;
/*
同名成员的处理：
1.访问方式：
 1.访问子类的同名成员：直接访问即可
 2.访问父类的同名成员：需要加作用域

*/
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	int m_A;
	void func()
	{
		cout << "Base->func函数的调用" << endl;
	}
	void func(int a)
	{
		cout << "Base->func(int a)函数的调用" << endl;
	}
};
class Son : public Base
{
public:
	int m_A;
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son->func函数的调用" << endl;
	}

};
void test01()//同名的成员属性
{
	Son s;
	cout << "Son下m_A="<<s.m_A << endl;
	cout << "Base下m_A=" << s.Base::m_A << endl;//需要加作用域
}
void test02()//同名的成员函数
{
	Son s;
	s.func();//调用子类的成员函数
	s.Base::func();//加作用域，来调用父类成员函数
	//s.func(100);
	//如果子类中出现和父类同名的成员函数，子类的同名成员函数会隐藏掉
	//父类的所有同名成员函数
	s.Base::func(100);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}