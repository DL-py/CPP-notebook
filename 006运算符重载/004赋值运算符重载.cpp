#include <iostream>
using namespace std;
/*
��ֵ��������أ�
*/
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);

	}
	Person& operator=(Person& p)
	{

		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//���
		m_Age = new int(*p.m_Age);
		return *this;
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	int* m_Age;
};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(30);

	p3 = p2 = p1;//��ʽ���˼��
	cout << "p1�������ǣ� " << *p1.m_Age << endl;
	cout << "p2�������ǣ� " << *p2.m_Age << endl;
	cout << "p3�������ǣ� " << *p3.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}