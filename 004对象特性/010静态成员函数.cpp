#include<iostream>
using namespace std;
/*
静态成员函数：
静态成员函数的特点：
1.所有对象共享同一个函数
2.静态成员函数只能访问静态成员变量
3.静态成员函数同样具有访问权限：
即当静态成员函数为私有时，类外是不能进行访问的
静态成员函数的访问方法：
1.通过对象进行访问
2.通过类进行访问
*/
class person
{
public:
	static void func() 
	{
		m_A = 0; 
	cout << "static void func函数的调用" << endl;
	}
	static int m_A;
};
int person::m_A = 100;

void test01()
{
	person p;
	p.func();
	person::func();
}
int main()
{
	test01();


	system("pause");
	return 0;
}