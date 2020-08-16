#include<iostream>
using namespace std;
/*
引用做函数参数：
1.注意：
 1.不要返回局部变量的引用，因为调用函数结束后，局部变量会被清空
 2.引用可以作为函数的返回值
*/
void swap(int& i, int& j)
{
	int temp;
	temp = i;
	i = j;
	j = temp;
}
int& test0()
{
	int a = 10;
	return a;
}
//函数的调用可以可以作为左值
int& test1()
{
	static int a = 10;
	return a;
}

void showvalue(const int& value)
{
	//value= 10000;此时不能修改，防止发生误操作
	cout << "value: " << value << endl;
}
int main()
{
	//利用引用做函数的参数，实现形参来修饰实参的目的
	int  a = 10;
	int  b = 20;
	int& ref = test0();
	cout << "ref:" << ref << endl;//返回局部变量的引用，只能使用一次
	cout << "ref:" << ref << endl;//调用结束该局部变量就会被清空，显示乱码

	int& ref1 = test1();
	cout << "ref1:" << ref1 << endl;//调用静态变量的引用，可以重复使用
	cout << "ref1:" << ref1 << endl;//调用结束该静态变量不会被清空，因此可以正常使用

	test1() = 1000;	//函数的调用可以作为左值,静态变量a的值也会被修改

    //利用引用交换两个数据的内容，来代替指针
	swap(a, b);
	cout << "a= " <<a <<endl;
	cout << "b= " <<b<< endl;
	showvalue(a);
	system("pause");
	return 0;
}