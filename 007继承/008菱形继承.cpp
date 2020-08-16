#include <iostream>
using namespace std;
/*
菱形继承：两个派生类继承了同一个基类，又有某个类同时继承了这两个派生类
1.菱形继承时，两个父类拥有相同数据，需要加作用域加以区分
2.菱形继承带来的问题:菱形继承导致数据有两份，浪费资源
3.解决方案：虚继承：继承方式前加入关键字virtual
*/
class Animal//动物类:虚基类
{
public:
	int m_Age;
};
class Sheep :virtual public Animal //羊类
{

};
class Camel :virtual public Animal//驼类
{

};
class Alpaca : public Sheep, public Camel//羊驼类
{

};
void test01()
{
	Alpaca al;
	al.Sheep::m_Age = 18;
	al.Camel::m_Age = 28;
	al.m_Age = 20;
	cout << "al.Sheep::m_Age="<<al.Sheep::m_Age << endl;
	cout << "al.Camel::m_Age="<<al.Camel::m_Age << endl;
	cout << "al.m_Age=" << al.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}