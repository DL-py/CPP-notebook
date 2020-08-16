#include<iostream>
using namespace std;
/*
构造函数的调用规则：
1.用户定义了有参构造函数：
编译器不再提供默认构造函数，但会提供拷贝构造函数
2.用户定义了拷贝构造函数：
编译器不再提供其他函数
*/

class Person
{
public:
	Person()
	{
		cout << "默认构造函数的调用" << endl;
	}
	Person(int age)
	{
		cout << "有参构造函数的调用" << endl;
		my_age = age;
		
	}
	Person(const Person& p)
	{
		cout << "拷贝构造函数的调用" << endl;
		my_age = p.my_age;
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	int my_age;

};

void test01()
{
	Person p(10);
	Person p2(p);
	cout << "p2的值为：" << p2.my_age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}