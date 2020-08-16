#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/*
关系运算符：
1.template<class T> bool equal_to<T>:等于
2.template<class T> bool not_equal<T>:不等于
3.template<class T> bool greater<T>:大于
4.template<class T> bool greater_equal<T>:大于等于
5.template<class T> bool less<T>:小于
6.template<class T> bool less_equal<T>:小于等于
*/
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	    cout << endl;
		//降序排列：
		//greater<int>()：内建的函数对象
		sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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