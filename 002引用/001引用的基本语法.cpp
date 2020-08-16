#include<iostream>
using namespace std;
/*
引用：为变量起别名，本质是一个指针常量
1.基本语法：变量类型& 变量名 = 引用名
2.注意：
 1.引用必须初始化，int&b;是错误的
 2.引用初始化后，其他变量不能再次使用
 3.引用的地址与原变量的地址相同，改变任意一个值两者均会被改变
*/
int main()
{  
	int a = 10;
	int& b = a;
	cout << "a:" << a << endl;
	cout <<"b:" <<b << endl;
	b = 100;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "id(a):" << &a << endl;
	cout << "id(b):" << &b << endl;
	system("pause");
	return 0;
}