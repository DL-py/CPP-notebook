#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用拷贝与替换算法_replace:
1.功能：将容器中指定范围内的旧元素替换为新元素
2.函数原型：replace(iterator beg, iterator end, oldvalue, newvalue)

*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(20);
	v.push_back(30);
	cout << "替换前：" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
	cout << "替换后： " << endl;//所有的20都被替换为2000
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), Myprint);

}
int main()
{
	test01();
	system("pause");
	return 0;
}