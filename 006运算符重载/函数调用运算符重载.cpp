#include <iostream>
using namespace std;
/*
函数调用运算符()重载：
1.由于重载后使用的方式非常想函数调用，因此成为仿函数
2.仿函数没有固定的写法，非常灵活
*/
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test01()
{
	MyPrint p;
	p("hello world");
}
void test02()//仿函数非常灵活
{
	MyAdd p1;
	cout << p1(1, 2) << endl;
	//匿名函数对象:执行一条语句就被释放
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}