#include <iostream>
using namespace std;
/*
��ϵ�������

*/
class Person
{
public:
	Person(string name, int age)
	{
		m_age = age;
		m_name = name;
	}
		int m_age;
	string m_name;
	//����==��ϵ�����
	bool operator==(Person &p)
	{
		if (this->m_age = p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		else
			return false;

	}
};
void test01()
{
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2)
	{
		cout << "����������������ͬ" << endl;
    }
}
int main()
{
	test01();
	system("pause");
	return 0;
}