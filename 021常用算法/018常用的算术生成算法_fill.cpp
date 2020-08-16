#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用的算术生成算法_fill:
1.功能描述：向容器中添加指定的元素
2.函数原型：fill(iterator beg,iterator end, value)

*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.resize(10);
	//重新填充
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), Myprint);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
