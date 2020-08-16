#include<iostream>
using namespace std;
/*
类内的成员变量和成员函数是分开存储的
1.空对象占用的内存空间为1：
 1.编译器会给每个空对象也分配一个字节的内存空间
 2.为了区分空对象占内存空间的位置
 3.每一个空对象也应该具有一个独一无二的地址
2.不属于类的对象，不会占用对象的内存
*/
class person
{
	int m_A;  //非静态成员变量   属于类的对象上
	static int m_B;   //静态成员变量     不属于类的对象上
	void func1(){}    //非静态成员函数   不属于类的对象上
	void func2() {}   //静态成员函数     不属于类的对象上
};
int person::m_B = 0;
void test01()
{
	person p;
	cout << "size of p =" << sizeof(p) << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}