#include<iostream>
using namespace std;
/*
类模板与继承：
1.当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
2.如果不指定，编译器无法为子类分配内存
3.如果想灵活指定父类中T的类型，子类也需要变为类模板
*/
template <class T>
class Base
{
public:
	T m;
};
class Son1 :public Base<int>//必须知道父类中T的数据类型，才能继承给子类
{

};
template <class T1,class T2>
class Son2 :public Base<T2>//如果想灵活指定父类中T的类型，子类也需要变为类模板
{
public:
	Son2()
	{
		cout << "T1的数据类型为" << typeid(T1).name() << endl;
		cout << "T2的数据类型为" << typeid(T2).name() << endl;
	}
	T1 obj;
};
void test01()
{
	Son1 s1;

}
void test02()
{
	Son2<int, char>S2;
}
int main()
{
	test02();
	system("pause");
	return 0;
}