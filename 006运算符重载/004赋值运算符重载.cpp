#include <iostream>
using namespace std;
/*
赋值运算符重载：
*/
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);

	}
	Person& operator=(Person& p)
	{

		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		return *this;
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	int* m_Age;
};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;//链式编程思想
	cout << "p1的年龄是： " << *p1.m_Age << endl;
	cout << "p2的年龄是： " << *p2.m_Age << endl;
	cout << "p3的年龄是： " << *p3.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}