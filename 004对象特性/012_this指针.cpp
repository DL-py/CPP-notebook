#include<iostream>
using namespace std;
/*
this指针：
指向被调用的成员函数所属的对象，隐含在每一个非静态成员函数内
2.用途：
 1.当形参与成员变量同名时，可用this来区分；
 2.在类的非静态成员函数中返回对象本身，可以使用return *this

*/
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& PersonADDAge(Person p)
	{
		this->age += p.age;
		return *this;
	}

 int age;
};
//解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄是：" << p1.age << endl;
}
//返回对象本身用*this
void test02()
{
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.PersonADDAge(p1).PersonADDAge(p1).PersonADDAge(p1);
	cout << "p2的年龄是：" << p2.age << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}