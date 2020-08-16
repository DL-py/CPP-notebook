#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
/*
排序操作：
对于支持随机访问的迭代器容器,都可以利用sort直接进行排序
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
	sort(d.begin(), d.end());//STL自带的排序算法
	Printdeque(d);
}
int main()
{
	test01();
	system("pause");
	return 0;
}