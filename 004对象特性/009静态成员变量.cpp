#include<iostream>
using namespace std;
/*
静态成员变量：
1.特点：
 1.所有对象共享同一份数据
 2.在编译阶段分配内存
 3.类内声明，类外初始化(必须要做)
 4.静态成员变量也是具有访问权限的，即私有静态成员变量在类内不能访问
2.语法：
static
3.访问方式：
 静态成员变量不属于任何一个对象，所有对象共享同一份数据
 1.通过对象进行访问
 2.通过类名进行访问
*/
class Person
{
public:

	static int m_A;//类内声明
};
int Person:: m_A = 100;//类外初始化

void test01()//共享同一份数据
{
	Person p1;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl; 
	
}
void test02()//访问静态成员变量的方式
{
	Person p1;
	cout << Person::m_A << endl;
	cout << p1.m_A << endl;
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}