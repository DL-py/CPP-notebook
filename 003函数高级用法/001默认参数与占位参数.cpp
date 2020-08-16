#include<iostream>
using namespace std;
/*
默认参数和占位参数：
默认参数：
1.函数定义时，已经为形参赋值，调用时可以不用传入参数
2.注意：
 1.有默认参数的形参后面的所有形参都要有默认参数
 2.声明中有默认参数则定义时不能有默认参数
*/

int sum(int a, int b=20, int c=40)
{
	int sum;
	sum = a + b + c;
	return sum;
}

int func(int a = 10, int b = 20);
int func(int a,int b)
{
	return a + b;
}

/*
占位参数：只有变量的类型
1.占位参数可以有默认参数
*/
void func2(int a,int )
{
	cout << "this is a func2" << endl;
}

void func3(int a, int=10)
{
	cout << "this is a func3" << endl;
}



int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	cout << "sum=" << sum(a, b, c) << endl;
	cout << "sum=" << sum(a) << endl;
	func2(10,10);
	func3(10);

	system("pause");
	return 0;
}