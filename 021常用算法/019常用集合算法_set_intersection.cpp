#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用集合算法_set_intersection:
1.功能描述：求两个集合的交集
2.函数原型：
set_insection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
注意：
1.源容器必须是有序的序列
2.目标容器开辟内存要为两个容器中取较小值
3.set_intersection返回值即是交集中最后一个元素的位置
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
	vector<int>vtarget;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vtarget.resize(min(v1.size(), v2.size()));
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), itEnd, Myprint());
	cout << endl;
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}