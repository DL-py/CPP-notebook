#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
常用查找算法：
1.函数原型：
 1.adjacent_find(iterator beg,iterator end)
 查找相邻重复元素,返回相邻元素的第一个位置迭代器
 
*/
void test01()
{
	vector<int> v;
	for (int i = 1; i < 10; i++)
	{
		v.push_back(i);
		v.push_back(i);
	}
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到:" << *it << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}