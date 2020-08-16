#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
常用查找算法_find_if
1.功能：按条件查找元素
2.函数原型：
 1.find_if(iterator beg,iterator end,pred)
 按值查找元素，返回找到位置的迭代器，找不到返回结束迭代器
 beg:开始迭代器
 end:结束迭代器
 pred:函数或者谓词
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
		cout << "未找到数据" << endl;
	}
	else
	{
		cout << "找到数据" << endl;
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
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到" << "姓名:" << (*it).m_Name << "年龄:" << (*it).m_Age << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}