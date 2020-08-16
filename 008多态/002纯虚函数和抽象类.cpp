#include <iostream>
using namespace std;
/*
1.纯虚函数：
在多态中，通常父类的虚函数的实现是无意义的，主要都是调用子类重写的内容
因此可以将虚函数改为纯虚函数
2.语法：
virtual 返回值类型 函数名（参数列表）=0
当类中有了纯虚函数，这个类也称为抽象类
3.抽象类的特点：
 1.无法实例化对象
 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/
class Base
{
public:
	virtual void func() = 0;//类中只要有一个纯虚函数，就是抽象类
};
class Son : public Base
{
public:
	virtual void func()
	{
		cout << "子类重写了父类的纯虚函数" << endl;
	}

};
void test01()
{
	//Base b; 抽象类无法实例化对象
	//new Base; 抽象类无法实例化对象
	//Son s;子类没有重写父类的纯虚函数，也是一个抽象类
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	system("pause");
	return 0;
}