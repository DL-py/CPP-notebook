#include<iostream>
using namespace std;
/*
内存四区：
1.代码区：存放代码 
2.全局区：全局变量(函数外)、静态变量(static)、常量
3.栈区：由编译器决定，用于存放局部变量，函数调用时变量被创建，调用结束被释放 
4.堆区：由程序员决定，创建（new）和释放
注意：
 1.const只修饰右边内容，被const修饰的内容无法修改
 2.在main函数中定义的变量是局部变量，但生命周期和全局变量相同
 3.不同的变量的变量是分开存放的，不同的内存区地址差异较大，区内的地址差异较小
 4.const修饰的全区变量放在全局区，const修饰的局部变量放在栈区
 5.静态变量（static）无论在什么地方定义都存在相同的区
*/

int g_a = 1;//全局变量
const int g_c_a = 5;
static int hello = 10;

int* func()
{
	int *p = new int(10);//new表示在堆区创建变量
	return p;
}

int main()
{
	int a = 1;//main中的局部变量
	int b = 2;
	static int c = 3;//静态变量
	const int c_l_a = 3;//const修饰的局部变量，就是常量
	int* p = func();
	system("pause");
	return 0;
}