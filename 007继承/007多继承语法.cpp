#include <iostream>
using namespace std;
/*
多继承语法：
1.继承语法： class 子类 :继承方式 父类1，继承方式 父类2,......
2.实际开发过程中不太建议使用多继承
*/
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};
class Son : public Base1, public Base2
{
public:
	int m_C;
	int m_D;
};
void test01()
{
	Son s;
	cout << "size of Son = " << sizeof(Son) << endl;
	//当父类中出现了同名的成员，需要加作用域区分
	cout << "Base1::m_A = " << s.Base1::m_A << endl;
	cout << "Base2::m_A = " << s.Base2::m_A << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}