#include<iostream>
using namespace std;
/*
类模板的基本语法：
1.建立一个通用类，类中成员的数据类型可以不具体指定，用一个虚拟的类型来代表
2.语法：
template<class T>
类
*/
template <class Nametype, class Agetype>
class Person
{
public:
	Person(Nametype name, Agetype age)
	{
		m_Name = name;
		m_Age = age;
	}
	Agetype m_Age;
	Nametype m_Name;
	void showPerson()
	{
		cout << m_Name << endl;
		cout << m_Age << endl;
	}
};
void test01()
{
	Person<string, int> p1("孙悟空",999);
	p1.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}