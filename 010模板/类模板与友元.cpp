#include <iostream>
using namespace std;
/*
类模板和友元：
1.全局函数类内实现：直接在类内声明友元即可
2.全局函数类外实现：需要让编译器提前知道全局函数的存在
建议使用全局函数做类内实现用法简单,而且编译器可以直接识别
*/
template <class T1, class T2>//提前让编译器知道Person类的存在
class Person;
template <class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "姓名：" << p.m_Name << "年龄:" << p.m_Age << endl;
}

template <class T1, class T2>
class Person
{
	//全局函数类内实现：
	friend void printPerson1(Person<T1, T2> p)
	{
		cout << "类外实现----姓名：" << p.m_Name << "年龄:" << p.m_Age << endl;
	}
	//全局函数类外实现：
	//加一个空模板参数列表：
	//如果全局函数在类外实现，需要让编译器提前知道这个函数的存在
	 friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;

};
void test01()
{
	Person <string, int> p1("Tom", 20);
	printPerson1(p1);
}
void test02()
{
	Person <string, int> p2("Jerry", 22);
	printPerson2(p2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}