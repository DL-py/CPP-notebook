#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
���ò����㷨_count:
1.���ܣ�ͳ��Ԫ�صĸ���
2.count(iterator beg,iterator end,value)

*/
void test01()//ͳ��������������
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	int num = count(v.begin(), v.end(), 40);
	cout << "40�ĸ���Ϊ�� " << num << endl;
}
class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	bool operator==(const Person& p)
	{
		if (m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};
void test02()//ͳ��������������
{
	vector<Person> v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 10);
	Person p4("ddd", 40);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	int num = count(v.begin(), v.end(), p3);
	cout << "����Ϊ��" <<num<< endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}