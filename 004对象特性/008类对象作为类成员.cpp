#include<iostream>
#include<string>
using namespace std;
/*
�������Ϊ���Ա��
1.���в������Ժ������õ��������ͣ������Ժ����Ѵ����������
2.�����������Ϊ�����Աʱ������ʱ�ȹ�������������ٹ�������
  ������˳���빹���෴
*/
class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone�Ĺ��캯������" << endl;
		m_pName = pName;
	}
	~Phone()
	{
		cout << "Phone��������������" << endl;
	}
	string m_pName;
};

class person
{
public:

	person(string Name, string pName) :m_Name(Name), m_Phone(pName)
	{
		cout << m_Name << "����" << m_Phone.m_pName << "�ֻ�" << endl;
	}
	~person()
	{
		cout << "person��������������" << endl;
	}
	string m_Name;
	Phone m_Phone;
};

void test01()
{
	person p1("����", "ƻ��MAX");
}
int main()
{
	test01();
	system("pause");
	return 0;
}