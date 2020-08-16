#include <iostream>
using namespace std;
/*
类模板成员函数类外实现：

*/
template <class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);

	void showPerson();
	
	T1 m_Name;
	T2 m_Age;
};
//构造函数的类外实现
template <class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	m_Name = name;
	m_Age = age;
}
template <class T1, class T2>
void Person<T1,T2>::showPerson()
{
	cout << "姓名：" << m_Name << "年龄:" << m_Age << endl;
}
void test01()
{
	Person<string, int>p1("Tom", 20);
	p1.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}