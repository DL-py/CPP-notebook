#include<iostream>
using namespace std;
/*
拷贝构造函数：使用已建立的对象来初始化新对象
*/

class Person
{
public:
	Person(int age)//有参构造函数
	{
		my_age = age;
	}
	Person(const Person& p)//拷贝构造函数
	{
	cout << "拷贝构造函数的调用" << endl;
		my_age = p.my_age;
	}

	int my_age;
};

void test1()
{
	Person p1(10);
	Person p2(p1); //拷贝构造函数
	cout << "p2的年龄为:" << p2.my_age << endl;
}

int main()
{
	test1();
	system("pause");
	return 0;
}