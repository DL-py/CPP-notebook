#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
/*
常用的算术生成算法_accumulate:
1.功能描述:计算区间内容器元素的累积和
2.函数原型：accumulate(iterator beg,iterator end,value)
 value:起始的累加值
*/
void test01()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	int total = accumulate(v.begin(), v.end(), 0);
	cout << "累加值为： " << total << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}