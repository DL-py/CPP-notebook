#include <iostream>
using namespace std;
/*
类模板中成员函数的创建时机：
1.模板类中中成员函数和普通类中成员函数创建时机是有区别的：
 1.普通类中的成员函数一开始就可以创建
 2.类模板中的成员函数在调用时才创建
*/
class Person1
{
public:
	void showPerson1()
	{
		cout << "showPerson1()" << endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "showPerson2()" << endl;
	}
};
template <class T>
class Myclass
{
public:
	T obj;
	//类模板成员函数
	void func1()
	{
		obj.showPerson1();
	}
	void func2() 
	{
		obj.showPerson2();
	}
};
void test01()
{
	Myclass <Person1> p;
	p.func1();//类模板的成员函数只有调用时才会被创建
	//p.func2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}