#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
���ò����㷨_find_if
1.���ܣ�����������Ԫ��
2.����ԭ�ͣ�
 1.find_if(iterator beg,iterator end,pred)
 ��ֵ����Ԫ�أ������ҵ�λ�õĵ��������Ҳ������ؽ���������
 beg:��ʼ������
 end:����������
 pred:��������ν��
*/
class GreatFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreatFive());
	if (it == v.end())
	{
		cout << "δ�ҵ�����" << endl;
	}
	else
	{
		cout << "�ҵ�����" << endl;
	}
}
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
class Greater20
{
public:
	bool operator()(const Person &p) 
	{
		return p.m_Age > 20;
	}
};
void test02()
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�" << "����:" << (*it).m_Name << "����:" << (*it).m_Age << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}