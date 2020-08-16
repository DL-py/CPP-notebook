#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���õĲ����㷨_find:
1.���ܣ�
 ����ָ��Ԫ�أ������ҵ���Ԫ�صĵ��������Ҳ������ؽ���������end()
2.����ԭ�ͣ�
 1.find(iterator beg,iterator end,val):
 beg:��ʼ������
 end:����������
 val:Ҫ���ҵ�ֵ
�ܽ᣺
���ڲ����Զ������͵����ݣ���Ҫ����==
*/
void test01()//����������������
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int>::iterator it = find(v1.begin(), v1.end(), 5);
	if (it == v1.end())
	{
		cout << "û���ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���Ԫ�أ� " << *it << endl;
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
	//����==�õײ��find֪����ζԱ�Person���͵�����
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

void test02()//�����Զ�����������
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
		cout << "û�в��ҵ�" << endl;
	}
	else
	{
		cout << "����: "<<(*it).m_Name <<"����: "<<(*it).m_Age  << endl;
	}

}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}