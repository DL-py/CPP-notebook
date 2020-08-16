#include<iostream>
#include<string>
using namespace std;
/*
类对象作为类成员：
1.类中不仅可以含有内置的数据类型，还可以含有已创建的类对象
2.其他类对象作为本类成员时，构造时先构造其他类对象，再构造自身
  析构的顺序与构造相反
*/
class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone的构造函数调用" << endl;
		m_pName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}
	string m_pName;
};

class person
{
public:

	person(string Name, string pName) :m_Name(Name), m_Phone(pName)
	{
		cout << m_Name << "拿着" << m_Phone.m_pName << "手机" << endl;
	}
	~person()
	{
		cout << "person的析构函数调用" << endl;
	}
	string m_Name;
	Phone m_Phone;
};

void test01()
{
	person p1("张三", "苹果MAX");
}
int main()
{
	test01();
	system("pause");
	return 0;
}