#include <iostream>
using namespace std;
#include <set>
/*
自定义数据类型指定排序规则：


*/
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
class Mycompare
{
public:
	bool operator()(const Person &p1, const Person &p2) const
	{
		//按照年龄降序：
		return p1.m_Age > p2.m_Age;
	}
};
void test01()
{//自定义的数据类型都会指定排序规则
	set<Person,Mycompare> s1;
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	for (set<Person, Mycompare>::const_iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << "姓名： " << (*it).m_Name << endl;
		cout << "年龄： " << (*it).m_Age << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}