#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
常用的拷贝与替换算法_swap:
1.功能描述：互换两个同类型容器的元素
2.函数原型：
swap(container c1,container c2):
*/
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
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	vector<int> v2;
	v2.push_back(100);
	v2.push_back(200);
	v2.push_back(300);
	v2.push_back(400);
	cout << "交换前： " << endl;
	for_each(v1.begin(), v1.end(), Myprint());
	cout << endl;
	for_each(v2.begin(), v2.end(), Myprint());
	cout << endl;
	cout << "交换后： " << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), Myprint());
	cout << endl;
	for_each(v2.begin(), v2.end(), Myprint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}