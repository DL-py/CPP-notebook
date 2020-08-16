#include <iostream>
#include <string>
using namespace std;
/*
函数模板的局限性：
模板不是万能的，有些特定数据类型，需要用特殊化方式做具体实现
利用具体化的模板，可以解决自定义类型的通用化

*/
class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int  m_Age;

};
template <typename T>
bool Mycompare(T& a, T& b)
{
	if (a == b)
		return true;
	else
		return false;
}
//利用具体化得Person的版本来实现代码，具体化优先调用
template<> bool Mycompare(Person& p1, Person& p2)
{
	if (p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret;
	ret = Mycompare(a, b);
	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}
void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret;
	ret = Mycompare(p1, p2);
	if (ret)
	{	
     cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}