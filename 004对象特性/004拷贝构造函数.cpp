#include<iostream>
using namespace std;
/*
�������캯����ʹ���ѽ����Ķ�������ʼ���¶���
*/

class Person
{
public:
	Person(int age)//�вι��캯��
	{
		my_age = age;
	}
	Person(const Person& p)//�������캯��
	{
	cout << "�������캯���ĵ���" << endl;
		my_age = p.my_age;
	}

	int my_age;
};

void test1()
{
	Person p1(10);
	Person p2(p1); //�������캯��
	cout << "p2������Ϊ:" << p2.my_age << endl;
}

int main()
{
	test1();
	system("pause");
	return 0;
}