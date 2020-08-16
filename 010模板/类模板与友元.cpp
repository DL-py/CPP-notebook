#include <iostream>
using namespace std;
/*
��ģ�����Ԫ��
1.ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
2.ȫ�ֺ�������ʵ�֣���Ҫ�ñ�������ǰ֪��ȫ�ֺ����Ĵ���
����ʹ��ȫ�ֺ���������ʵ���÷���,���ұ���������ֱ��ʶ��
*/
template <class T1, class T2>//��ǰ�ñ�����֪��Person��Ĵ���
class Person;
template <class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "������" << p.m_Name << "����:" << p.m_Age << endl;
}

template <class T1, class T2>
class Person
{
	//ȫ�ֺ�������ʵ�֣�
	friend void printPerson1(Person<T1, T2> p)
	{
		cout << "����ʵ��----������" << p.m_Name << "����:" << p.m_Age << endl;
	}
	//ȫ�ֺ�������ʵ�֣�
	//��һ����ģ������б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	 friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;

};
void test01()
{
	Person <string, int> p1("Tom", 20);
	printPerson1(p1);
}
void test02()
{
	Person <string, int> p2("Jerry", 22);
	printPerson2(p2);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}