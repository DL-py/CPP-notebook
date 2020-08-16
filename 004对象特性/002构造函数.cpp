#include<iostream>
using namespace std;
/*构造函数:进行初始化操作
1.分类：普通构造函数、拷贝构造函数
2.命名方式：以类名作为函数名，无函数类型,无返回值。
3.构造函数可以发生重载
4.对象创建时被自动调用且只被调用一次
5.编译器会自动提供空实现的构造函数
*/

class person
{
public:
	person()
	{
		cout << "person的构造函数的调用" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person(int a)的构造函数的调用" << endl;
	}
	//拷贝构造函数
	person(const person& p)
	{
	
		age = p.age;
	}
	~person()
	{
		cout << "person的析构函数的调用" << endl;
	}
	int age;

};

void test1()
{
//调用
//括号法
	person P;
	person p1();

//显示法
//隐式转换法

}
int main()
{

	system("pause");
	return 0;
}