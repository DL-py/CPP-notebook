#include <iostream>
using namespace std;
/*
左移运算符重载：输出自定义的数据类型
1.左移运算符：用于数据输出
2.重载方式：
 1.成员函数
 2.全局函数
3.注意：
遇到自定义类型的数据才会使用左移运算符的重载，对于内置类型不用
*/
class Person
{
friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
	//利用成员函数重载左移运算符:p.operator(cout),简化版本p<<cout
	//不会利用成员函数重载左移运算符，无法实现cout在左侧
	//void operator<<(cout)
	//{


	//}
};
//利用全局函数重载左移运算符：ostream ：输出流的类，对象只能有一个
ostream& operator<<(ostream &cout, Person &p)//连式编程思想
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

//因为是传递引用，引用就是起别名，因此传入的可以不是cout可以是其他名字
//ostream& operator<<(ostream& out, Person& p)
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return out;
//
//}

void test01()
{
	Person p(10,10);
	cout << p << " hello world"<<endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}