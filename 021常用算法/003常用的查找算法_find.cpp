#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用的查找算法_find:
1.功能：
 查找指定元素，返回找到的元素的迭代器，找不到返回结束迭代器end()
2.函数原型：
 1.find(iterator beg,iterator end,val):
 beg:开始迭代器
 end:结束迭代器
 val:要查找的值
总结：
对于查找自定义类型的数据，需要重载==
*/
void test01()//查找内置数据类型
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
	if (it == v1.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到了元素： " << *it << endl;
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
	//重载==让底层的find知道如何对比Person类型的数据
	bool operator==(const Person& p)
	{
		if (m_Name == p.m_Name && m_Age == p.m_Age)
		{
			return true;
		}
		else
			return false;
	}
	string m_Name;
	int m_Age;
};

void test02()//查找自定义数据类型
{

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	vector<Person> v1;
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	vector<Person>::iterator it = find(v1.begin(), v1.end(), p2);
	if (it == v1.end())
	{
		cout << "没有查找到" << endl;
	}
	else
	{
		cout << "姓名: "<<(*it).m_Name <<"年龄: "<<(*it).m_Age  << endl;
	}

}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}