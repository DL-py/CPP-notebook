#include<iostream>
#include<string>
using namespace std;
/*
������Ԫ:���е����г�Ա�������ɷ�����һ�����˽������
*/
class Building
{
	//GoodGay��ʱ����ĺ����ѣ����Է��ʱ�����˽�г�Ա
	friend class GoodGay;
public:
	Building()
	{
		m_Settingroom = "����";
		m_Bedroom = "����";
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
		building = new Building;//�������������
	}
public:
	void visit()
	{
		cout << "�û������ڷ���:" << building->m_Settingroom << endl;
		cout << "�û������ڷ���:" << building->m_Bedroom << endl;
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