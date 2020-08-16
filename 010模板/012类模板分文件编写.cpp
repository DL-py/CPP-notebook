#include <iostream>
using namespace std;
//#include "Person.cpp"//直接包含.cpp源文件
#include "Person.hpp"//.c和.cpp写到一起，写为.hpp并调用
/*
类模板分文件编写：
1.可能产生的问题:类模板的创建时机是在调用阶段，导致分文件编写时调用不到
2.解决方案：
 1.直接包含.cpp源文件
 2.将声明.h和实现.cpp写到同一个文件中，并更改后缀为.hpp,.hpp是约定名称，并不是强制
主流的解决方案是第二种方法
 */
void test01()
{
	Person <string, int>p1("Jerry", 18);
	p1.showPerson();//直接包含.cpp源文件
}
int main()
{
	test01();
	system("pause");
	return 0;
}