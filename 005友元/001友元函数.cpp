#include<iostream>
#include<string>
using namespace std;
/*
友元函数：类外函数访问私有成员
*/


class Building//定义Building类
{
//发出声明：goodGey函数是Building的好基友，他可以访问我的成员
	friend void goodGey(Building* building);

public://公共方法
	Building()//构造函数，用于进行初始化一个对象
	{
		m_Settingroom = "客厅";
		m_Bedroom = "卧室";
	}

public://公共属性
	string m_Settingroom;

private://私有属性
	string m_Bedroom;
};


void goodGey(Building *building)//非常普通的类外自定义函数
{
	cout << "好基友的全局函数 正在访问：" << building->m_Settingroom << endl;
	cout << "好基友的全局函数 正在访问：" << building->m_Bedroom<< endl;
}
void test01()
{
	Building building;
	goodGey(&building);
}
int main()
{
	test01();

	system("pause");
	return 0;
}