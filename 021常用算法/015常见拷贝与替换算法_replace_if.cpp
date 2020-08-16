#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
/*
常用的拷贝与替换算法_replace_if:
1.功能：将区间满足条件的元素，替换为指定的元素
2.函数原型：
replace_if(iterator beg,iterator end,_pred,newvalue)

*/
class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
class Replace
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(50);
	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), Myprint());
	replace_if(v.begin(), v.end(), Replace(), 100);
	cout << endl;
	cout << "替换后： " << endl;
	for_each(v.begin(), v.end(), Myprint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}