#include<iostream>
#include<string>
using namespace std;
/*
��Ԫ���������⺯������˽�г�Ա
*/


class Building//����Building��
{
//����������goodGey������Building�ĺû��ѣ������Է����ҵĳ�Ա
	friend void goodGey(Building* building);

public://��������
	Building()//���캯�������ڽ��г�ʼ��һ������
	{
		m_Settingroom = "����";
		m_Bedroom = "����";
	}

public://��������
	string m_Settingroom;

private://˽������
	string m_Bedroom;
};


void goodGey(Building *building)//�ǳ���ͨ�������Զ��庯��
{
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_Settingroom << endl;
	cout << "�û��ѵ�ȫ�ֺ��� ���ڷ��ʣ�" << building->m_Bedroom<< endl;
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