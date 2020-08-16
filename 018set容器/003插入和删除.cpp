#include <iostream>
#include <set>
using namespace std;
/*
插入和删除：
1.插入：
 1.insert():在容器中插入数据
2.删除：
 1.clear():清空容器中的所有数据
 2.erase(pos):删除pos迭代器所指的元素，返回下一个元素的迭代器
 3.erase(beg,end):删除[beg,end)区间的元素，返回下一个元素的迭代器
 4.erase(elem)：删除容器中值为elem的元素
*/
void Printset(const set<int>& st)
{
	for (set<int>::const_iterator it = st.begin(); it != st.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> st1;
	st1.insert(30);
	st1.insert(10);
	st1.insert(20);
	st1.insert(40);
	Printset(st1);
	//删除：
	st1.erase(st1.begin());
	Printset(st1);
	st1.erase(30);
	Printset(st1);
	//清空：
	st1.clear();
	//st1.erase(st1.begin(), st1.end());
	Printset(st1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}