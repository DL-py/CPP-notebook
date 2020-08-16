#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
/*
常用排序算法_random_shuffle:
1.功能描述：洗牌，指定范围内的元素进行随机调整顺序
2.函数原型：
 random_shuffle(iterator beg, iterator end)

总结：
random_shuffle比较实用，使用时记得加
*/
class MyPrint
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
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}