#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���õĲ����㷨��
1.����������
������ͳ��Ԫ�س��ָ���
2.����ԭ�ͣ�
 count_if(iterator beg,iterator end,_pred)
*/
class Great5
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};
void test01()//������������
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	int num = count_if(v.begin(), v.end(), Great5());
	cout << "����5��Ԫ�صĸ���Ϊ�� " << num << endl;
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
class AgeGreater20
{
public:
	bool operator()(const Person& p)
	{
		if (p.m_Age > 20)
			return true;
		else
			return false;
	}

};
void test02()
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	int num = count_if(v.begin(), v.end(), AgeGreater20());
	cout << "�������20���У� " << num << "��" << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}