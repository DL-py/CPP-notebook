#include<iostream>
using namespace std;
/*
thisָ�룺
ָ�򱻵��õĳ�Ա���������Ķ���������ÿһ���Ǿ�̬��Ա������
2.��;��
 1.���β����Ա����ͬ��ʱ������this�����֣�
 2.����ķǾ�̬��Ա�����з��ض���������ʹ��return *this

*/
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}
	Person& PersonADDAge(Person p)
	{
		this->age += p.age;
		return *this;
	}

 int age;
};
//������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << "p1�������ǣ�" << p1.age << endl;
}
//���ض�������*this
void test02()
{
	Person p1(10);
	Person p2(10);
	//��ʽ���˼��
	p2.PersonADDAge(p1).PersonADDAge(p1).PersonADDAge(p1);
	cout << "p2�������ǣ�" << p2.age << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}