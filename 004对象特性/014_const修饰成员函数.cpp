#include<iostream>
using namespace std;
/*
const修饰成员函数：
1.const修饰的成员函数-常函数
2.常函数内不可以修改成员属性
3.成员属性声明时加关键字mutable,在常函数中依然可以修改
4.常对象：
 1.声明对象前加const称该对象为常对象
 2.常对象只能调用常函数
*/
class person
{
public:
   //this指针的本质 是指针常量  指针的指向是不可以修改的
	//const person * const this;  person前的const等价于函数后面的const
	//在成员函数后加const修饰的是this指针，让指针指向的值也不可以修改
	void showperson() const 
	{
		 this->m_B = 100;
		//this->m_A = 100;
	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数中也可以修改这个变量的值加上关键字mutable
};
//常函数
void test01()
{
	person p;
	p.showperson();
}
//常对象
void test02()
{
  const person p; 
  p.m_B = 100;//m_B是特殊的变量在常对象下也可以修改
  //常对象只能调用常函数
  p.showperson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}