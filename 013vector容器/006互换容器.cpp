#include<iostream>
#include <vector>
using namespace std;
/*
����������
1.v1.swap(v2):��������
*/
void Printvector(vector<int>& p)
{
	for (vector<int>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "����ǰ:" << endl;
	Printvector(v1);
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	Printvector(v2);
	cout << "������" << endl;
	v1.swap(v2);
	Printvector(v1);
	Printvector(v2);
}
void test02()//����swap���������ڴ�ռ�
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v�������� " << v.capacity() << endl;
	cout << "v�Ĵ�С�� " << v.size() << endl;
	v.resize(3);
	cout << "v�������� " << v.capacity() << endl;
	cout << "v�Ĵ�С�� " << v.size() << endl;
	//����swap�������ڴ棻
	vector<int>(v).swap(v);//vector<int>(v)--��������ִ���굱ǰ��䣬�ڴ�ᱻ�Զ�����
	cout << "v�������� " << v.capacity() << endl;
	cout << "v�Ĵ�С�� " << v.size() << endl;
}
int main()
{
	//test01();
	int i = 1;
	int* p = &i;
	cout << *p << endl;
	
	test02(); 
	system("pause");
	return 0;
}
