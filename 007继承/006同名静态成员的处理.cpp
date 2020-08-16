#include <iostream>
using namespace std;
/*
同名静态成员的处理：
1.与非静态成员处理方式一致：
 1.访问子类同名成员，直接访问即可
 2.访问父类同名成员，需要加作用域

*/
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base->func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base->func()" << endl;
	}
};
int Base::m_A = 100;
class Son : public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son->func()" << endl;
	}
};
int Son::m_A = 200;
//同名静态成员属性：
void test01()
{
	Son s;
	//1.通过对象访问静态成员属性：
	cout << "Son 下 m_A:" << s.m_A << endl;
	cout << "Base 下 m_A:" << s.Base::m_A << endl;
	//2.通过类访问静态成员属性：
	cout << "Son 下 m_A:" << Son::m_A << endl;
	cout << "Base 下 m_A:" << Son::Base::m_A << endl;
}
//同名静态成员函数：
void test02()
{
	Son s;
	//通过对象调用静态成员函数：
	s.func();
	s.Base::func();
	//通过类名调用静态成员函数：
	Son::func();
	Son::Base::func();
	//如果子类中出现和父类同名的成员函数，子类的同名成员函数会隐藏掉
	//父类的所有同名成员函数
	Son::Base::func(100);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}