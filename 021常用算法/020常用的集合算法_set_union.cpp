#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用的集合算法_set_union:
1.功能：求两个集合的并集
2.函数原型：
set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
3.注意：
1.求并集的两个集合必须是有序序列
2.目标容器开辟空间时需要两个容器的size值相加
3.set_union返回的是并集中最后一个元素的位置
*/
class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>vTarget;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vTarget.resize(v1.size() + v2.size());//开辟目标容器空间
	vector<int>::iterator itEnd= set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}
