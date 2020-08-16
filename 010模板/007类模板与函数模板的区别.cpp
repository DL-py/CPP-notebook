#include<iostream>
using namespace std;
/*
类模板与函数模板的区别：
1.类模板没有自动类型推导的使用方式
2.类模板在模板参数列表中可以有默认参数
*/
template <class Nametype, class Agetype=int>//默认参数
class Person
{
public:
	Person(Nametype name, Agetype age)
	{
		m_Name = name;
		m_Age = age;
	}
	Nametype m_Name;
	Agetype m_Age;
	void showPerson()
	{
		cout << "name:" << m_Name << endl << "age" << m_Age << endl;
	}
};
void test01()
{
	//Person p1("孙悟空", 999);类模板没有自动类型推导的使用方式
	Person <string, int> p1("孙悟空", 999);//只能用显示指定类型
	p1.showPerson();

}
void test02()
{
	Person <string> p2("猪八戒", 999);
	p2.showPerson();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}