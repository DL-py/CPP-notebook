#include<iostream>
#include<string>
using namespace std;
/*
友元成员方法：类中的某些成员方法可以访问另一个类中的私有属性
*/
class Building;

class GoodGay
{
public:
	GoodGay();
public:
	void visit();//让visit函数可以访问Building中私有成员
	void visit2();//让visit2函数不可以访问Building中私有成员
public:
	 Building * building;

};

class Building
{
//告诉编译器GoodGay类下的visit成员函数作为本类的好朋友可以访问本类的私有成员
friend void GoodGay::visit();

public:
	Building();
public:
	string m_Settingroom;
private:
	string m_Bedroom;
};

//类外去写成员函数
GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}

//类外去写成员函数
Building::Building()
{
	m_Settingroom = "客厅";
	m_Bedroom = "卧室";
}

void GoodGay::visit()
{
	cout << "visit正在访问:" << building->m_Settingroom << endl;
	cout << "visit正在访问:"  << building->m_Bedroom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2正在访问:" << building->m_Settingroom << endl;
}
void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}