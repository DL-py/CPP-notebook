#include <iostream>
using namespace std;
#include <set>
/*
�Զ�����������ָ���������


*/
class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class Mycompare
{
public:
	bool operator()(const Person &p1, const Person &p2) const
	{
		//�������併��
		return p1.m_Age > p2.m_Age;
	}
};
void test01()
{//�Զ�����������Ͷ���ָ���������
	set<Person,Mycompare> s1;
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	for (set<Person, Mycompare>::const_iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "������ " << (*it).m_Name << endl;
		cout << "���䣺 " << (*it).m_Age << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}