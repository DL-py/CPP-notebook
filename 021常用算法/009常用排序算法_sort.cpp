#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
常用排序算法_sort:
1.功能：对容器内的元素尽心排序
2.函数原型：
 1.sort(iterator beg, iterator end,_pred)
*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);
	sort(v.begin(), v.end());//元素按照升序排列
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
	//改变为降序排列
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
