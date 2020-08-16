#include<iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/*
逻辑仿函数：
1.template<class T> logical_and<T>:逻辑与
2.template<class T> logical_or<T>:逻辑或
3.template<class T> logical_not<T>:逻辑非
*/
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<bool> v2;
	v2.resize(v.size());//搬运前必须为目标容器开辟空间
	//transform：搬运算法
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
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