#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
/*
���������
����֧��������ʵĵ���������,����������sortֱ�ӽ�������
*/
void Printdeque(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(300);
	d.push_back(200);
	d.push_back(100);
	Printdeque(d);
	sort(d.begin(), d.end());//STL�Դ��������㷨
	Printdeque(d);
}
int main()
{
	test01();
	system("pause");
	return 0;
}