#include <iostream>
using namespace std;
/*
加号运算符重载：
1.语法：operator+作为函数名，利用全局函数或成员函数进行重载。
2.重载方法：
 1.利用成员函数进行重载
 2.利用全局函数进行重载
*/


class Person
{
public:

	int m_A;
	int m_B;
	//利用成员函数重载加号：
	//Person operator+(Person& a)
	//{
	//	Person tempt;
	//	tempt.m_A = this->m_A + a.m_A;
	//	tempt.m_B = this->m_B + a.m_B;
	//	return tempt;
	//}
};
//利用全局函数进行加号重载
Person operator+(Person& a, Person& b)
{
	Person tempt;
	tempt.m_A = a.m_A + b.m_A;
	tempt.m_B = a.m_B + b.m_B;
	return tempt;
}

void test01()
{
	Person a;
	Person b;
	a.m_A = 10;
	a.m_B = 10;
	b.m_A = 10;
	b.m_B = 10;
	Person c = a + b;
	cout << "the value of m_A of c" << c.m_A << endl;
	cout << "the value of m_B of c" << c.m_B << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}




