#include<iostream>
using namespace std;
/*
��ģ��Ļ����﷨��
1.����һ��ͨ���࣬���г�Ա���������Ϳ��Բ�����ָ������һ�����������������
2.�﷨��
template<class T>
��
*/
template <class Nametype, class Agetype>
class Person
{
public:
	Person(Nametype name, Agetype age)
	{
		m_Name = name;
		m_Age = age;
	}
	Agetype m_Age;
	Nametype m_Name;
	void showPerson()
	{
		cout << m_Name << endl;
		cout << m_Age << endl;
	}
};
void test01()
{
	Person<string, int> p1("�����",999);
	p1.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}