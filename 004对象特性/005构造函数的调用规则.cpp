#include<iostream>
using namespace std;
/*
���캯���ĵ��ù���
1.�û��������вι��캯����
�����������ṩĬ�Ϲ��캯���������ṩ�������캯��
2.�û������˿������캯����
�����������ṩ��������
*/

class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	Person(int age)
	{
		cout << "�вι��캯���ĵ���" << endl;
		my_age = age;
		
	}
	Person(const Person& p)
	{
		cout << "�������캯���ĵ���" << endl;
		my_age = p.my_age;
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
	int my_age;

};

void test01()
{
	Person p(10);
	Person p2(p);
	cout << "p2��ֵΪ��" << p2.my_age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}