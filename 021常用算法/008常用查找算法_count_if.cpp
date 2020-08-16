#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用的查找算法：
1.功能描述：
按条件统计元素出现个数
2.函数原型：
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
void test01()//内置数据类型
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	int num = count_if(v.begin(), v.end(), Great5());
	cout << "大于5的元素的个数为： " << num << endl;
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
	cout << "年龄大于20的有： " << num << "人" << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}