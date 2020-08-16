#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用的集合算法_set_difference:
1.功能：求解两个集合的差集
2.函数原型：
set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
3.注意：
 1.两个集合必须是有序序列
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
	vector<int> v1;
	vector<int> v2;
	vector<int>vTarget;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vTarget.resize(max(v1.size(),v2.size()));
	cout << "v1和v2的差集：" << endl;
	vector<int>::iterator itEnd =  set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint());
	cout << endl;
	cout << "v2和v1的差集：" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint());
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}