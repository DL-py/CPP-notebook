#include<iostream>
#include<string>
using namespace std;
/*
类做友元:类中的所有成员方法都可访问另一个类的私有属性
*/
class Building
{
	//GoodGay类时本类的好朋友，可以访问本类中私有成员
	friend class GoodGay;
public:
	Building()
	{
		m_Settingroom = "客厅";
		m_Bedroom = "卧室";
	}
public:
	string m_Settingroom;
private:
	string m_Bedroom;
};


class GoodGay
{
public:
	GoodGay()
	{
		building = new Building;//创建建筑物对象
	}
public:
	void visit()
	{
		cout << "好基友正在访问:" << building->m_Settingroom << endl;
		cout << "好基友正在访问:" << building->m_Bedroom << endl;
	}
	Building* building; 
};

void test01()
{
	GoodGay gg;
	gg.visit();
}
int main()
{
	test01();
	system("pause");
	return 0;
}