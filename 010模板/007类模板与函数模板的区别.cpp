#include<iostream>
using namespace std;
/*
��ģ���뺯��ģ�������
1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
2.��ģ����ģ������б��п�����Ĭ�ϲ���
*/
template <class Nametype, class Agetype=int>//Ĭ�ϲ���
class Person
{
public:
	Person(Nametype name, Agetype age)
	{
		m_Name = name;
		m_Age = age;
	}
	Nametype m_Name;
	Agetype m_Age;
	void showPerson()
	{
		cout << "name:" << m_Name << endl << "age" << m_Age << endl;
	}
};
void test01()
{
	//Person p1("�����", 999);��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
	Person <string, int> p1("�����", 999);//ֻ������ʾָ������
	p1.showPerson();

}
void test02()
{
	Person <string> p2("��˽�", 999);
	p2.showPerson();
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}