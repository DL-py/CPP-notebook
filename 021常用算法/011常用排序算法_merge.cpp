#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用排序算法_merge:
1.功能描述：两个容器元素合并，并储存到另一个容器中
2.函数原型：
 1.merge(iterator beg1, iterator end1, iterator beg2,iterator end2,iterator dest)
 beg1:容器1开始迭代器
 end1:容器1结束迭代器
 beg2:容器2开始迭代器
 end2:容器2结束迭代器
 dest:目标容器开始迭代器
 */
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i+1);
	}
	//提前为目标容器分配内存：
	v3.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}