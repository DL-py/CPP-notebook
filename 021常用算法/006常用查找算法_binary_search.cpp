#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
常用查找算法_binary_search:
1.功能描述：查找指定元素是否存在
2.函数原型：
 1.bool binary_search(iterator beg,iterator end,val)
 查到返回true,否则返回false
 注意：这个容器必须是有序的序列
 */
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool flag = binary_search(v.begin(), v.end(), 9);
	if (flag == true)
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}