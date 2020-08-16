#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用拷贝与替换算法_copy:
1.功能：将容器内指定范围的元素拷贝到另一容器中
*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;//提前为目标容器开辟空间
	v2.resize(v.size());
	copy(v.begin(), v.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Myprint);
}
int main()
{
	test01();
	system("pause");
	return 0;
}