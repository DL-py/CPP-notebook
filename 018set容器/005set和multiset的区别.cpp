#include <iostream>
#include <set>
using namespace std;
/*
set和multiset的区别：
 1.set不允许容器中有重复的数据
 2.multiset允许容器中有重复的数据
 3.set插入数据的同时会返回插入结果，表示插入是否成功
 4.multiset不会检测，因此可以插入重复数据
*/
void Printmultiset(const multiset<int>& ms)
{
	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> st1;
	pair<set<int>::iterator,bool> ret = st1.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}
	ret = st1.insert(10);
	if (ret.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	Printmultiset(ms);
}
int main()
{
	test01();
	system("pause");
	return 0;
}