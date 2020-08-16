#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用的遍历算法_transform
1.搬运容器到另一个容器中
2.函数原型：
transform(iterator beg1,iterator end1,iterator beg2,_func)
beg1:源容器的开始迭代器
end1:源容器的结束迭代器
beg2:目标容器开始迭代器
_func:函数或函数对象
*/
class Trasform
{
public:
	int operator()(int val) 
	{
		return val;
	}
};
class Myprint
{
public:
	void operator()(int val) 
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	v2.resize(v.size());//搬运的目标容器必须提前开辟空间否则无法正常搬运
	transform(v.begin(), v.end(), v2.begin(),Trasform());
	for_each(v2.begin(), v2.end(), Myprint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}