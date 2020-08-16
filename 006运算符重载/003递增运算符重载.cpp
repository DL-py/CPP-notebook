#include <iostream>
using namespace std;
/*
递增运算符（++）重载：
*/
//自定义的整型：
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);
public:

	MyInteger()
	{
		m_num = 0;
	}
	//重载前置++运算符：返回引用是为了一直对一个数据进行操作
	MyInteger& operator++()
	{   //先进行++的运算
		m_num++;
		//再将自身做一个返回
		return *this;
	}
	//重载后置++运算符：返回的是值，不能返回局部变量的引用
	//void operator++(int) int代表占位参数，用于区分前置和后置递增
	MyInteger& operator++(int)
	{
		MyInteger temp;
       //先 记录当时的结果
		temp = *this;
	   //后 递增
		m_num++;
		//最后 将记录结果返回
		return temp;

	}
private:
	int m_num;
};
//重载左移运算符：
ostream& operator<< (ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}
void test01()
{
	MyInteger myint;

	cout << ++myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}