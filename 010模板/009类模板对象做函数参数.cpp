#include<iostream>
using namespace std;
/*
��ģ�����������������
1.���뷽ʽ��
 1.ָ����������ͣ�ֱ����ʾ�������������
 2.����ģ�黯���������еĲ�����Ϊģ�鴫��
 3.������ģ�廯�����������ģ�廯���д���
2.�ܽ᣺
 ƽ��ָ�����������Ӧ�ñȽϳ���
*/
template <class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}
	T1 m_Name;
	T2 m_Age;
	void showPerson()
	{
		cout << "������" << m_Name << "���䣺" <<m_Age<< endl;
	}
};
void printPerson1(Person<string, int>& p)//ָ����������
{
	p.showPerson();
}
void test01()
{
	Person<string, int> p1("�����", 999);
	printPerson1(p1);
}
template <class T1, class T2>
void printPerson2(Person< T1, T2> &p)//����ģ�黯
{
	p.showPerson();
	//�鿴T1��T2�����ͣ�
	cout << "T1������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int> p1("��˽�", 990);
	printPerson2(p1);
}

template <class T>
void printPerson3(T &p)//������ģ�廯
{
	p.showPerson();
	cout << "T����������Ϊ��" << typeid(T).name() << endl;
}
void test03()
{
	Person <string, int> p3("��ɮ", 30);
	printPerson3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}