#include <iostream>
using namespace std;
/*
函数对象（仿函数）的基本使用：
1.特点：
 1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
 2.函数对象超出普通函数的概念，函数对象可以有自己的状态
 3.函数对象可以作为参数传递
*/
class MyAdd
{
public:
	int operator()(int a1, int a2)
	{
		return a1 + a2;
	}
};
void test01()//函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
{
	int a = 10;
	int b = 20;
	MyAdd myadd;
	cout << myadd(a, b) << endl;
}
class MyPrint
{
public:
	MyPrint()
	{
		count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}
	int count;//内部状态
};
void test02()//函数对象超出普通函数的概念，函数对象可以有自己的状态
{
	MyPrint myprint;
	myprint("hello world!");
	myprint("hello world!");
	myprint("hello world!");
	myprint("hello world!");
	cout << "MyPrint调用的次数：" << myprint.count << endl;
}
void doPrint(MyPrint& mp, string test)//函数对象可以作为参数传递
{
	mp(test);
}
void test03()
{
	MyPrint myprint;
	doPrint(myprint, "hello world");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}