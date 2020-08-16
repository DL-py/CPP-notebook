#include <iostream>
using namespace std;
/*
基本语法：
1.动态多态的满足条件：
 1.有继承关系
 2.子类要重写父类的虚函数
2.重写：函数的返回值、函数名、参数列表要完全相同
3.动态多态使用
 1.父类的指针或引用指向子类的对象
*/
class Animal
{
public:
	virtual void speak()//虚函数
	{
		cout << "动物在说话" << endl;
	}
};
class Cat : public Animal
{
public:
	void speak()//子类的vitual可写可不写
	{
		cout << "小猫在说话" << endl;
	}
};
//地址早绑定，在编译阶段就确定了函数的地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定
//就是地址晚绑定
void dospeak(Animal& animal)//父类的引用或指针指向子类的对象
{
	animal.speak();
}
void test01()
{
	Cat cat;
	dospeak(cat);//c++中允许父子类型的转换
}
void test02()
{
	cout << "size of animal=" << sizeof(Animal) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}