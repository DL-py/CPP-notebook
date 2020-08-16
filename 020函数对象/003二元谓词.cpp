#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
二元谓词： 

*/
class Mycompare
{
public:
	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	cout << "从小到大排序：" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	    cout << endl;
		cout << "从大到小排序：" << endl;
   //使用函数对象，改变算法策略，排序规则为从大到小
	sort(v.begin(), v.end(), Mycompare());
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}