#include<iostream>
#include<string>
using namespace std;
/*
��Ԫ��Ա���������е�ĳЩ��Ա�������Է�����һ�����е�˽������
*/
class Building;

class GoodGay
{
public:
	GoodGay();
public:
	void visit();//��visit�������Է���Building��˽�г�Ա
	void visit2();//��visit2���������Է���Building��˽�г�Ա
public:
	 Building * building;

};

class Building
{
//���߱�����GoodGay���µ�visit��Ա������Ϊ����ĺ����ѿ��Է��ʱ����˽�г�Ա
friend void GoodGay::visit();

public:
	Building();
public:
	string m_Settingroom;
private:
	string m_Bedroom;
};

//����ȥд��Ա����
GoodGay::GoodGay()
{
	//�������������
	building = new Building;
}

//����ȥд��Ա����
Building::Building()
{
	m_Settingroom = "����";
	m_Bedroom = "����";
}

void GoodGay::visit()
{
	cout << "visit���ڷ���:" << building->m_Settingroom << endl;
	cout << "visit���ڷ���:"  << building->m_Bedroom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2���ڷ���:" << building->m_Settingroom << endl;
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