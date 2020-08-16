#include <iostream>
#include <set>
using namespace std;
/*
查找和统计：
1.查找：
 1.find(key):查找key是否存在，若存在，返回该键的元素的迭代器，若不存在
             返回set.end();
2.统计：
 1.count(key):统计key的元素个数;
*/
void test01()
{
	set<int> st1;
	st1.insert(10);
	st1.insert(20);
	st1.insert(30);
	st1.insert(40);
	set<int>::iterator it = st1.find(300);
	if (it != st1.end())
	{
		cout << "找到元素: " << *it << endl;
	}
	else
	{
		cout << "未找到元素： " << endl;
	}
	//统计：
	int num = st1.count(30);
	cout << "元素30的个数为：" << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
