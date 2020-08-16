#include <iostream>
#include <list>
using namespace std;
/*
插入和删除：
1.push_back():在容器尾部插入一个数据
2.pop_back():删除容器中最后一个元素
3.push_front():在容器开头插入一个数据
4.pop_front():删除容器中第一个元素
5.insert(pos,elem):在pos位置插入elem元素的拷贝，返回新数据的位置
6.insert(pos,n,elem):在pos位置插入n个elem元素的拷贝，无返回值
7.insert(pos,beg,end):在pos位置插入[beg,end)区间数据的拷贝，无返回值
8.clear():移除容器中所有的数据
9.erase(beg,end):移除[beg,end)区间的数据，返回下一个数据的位置
10.erase(pos):删除pos位置的数据，返回下一个数据的位置
11.remove(elem):移除容器中所有与elem匹配的元素
*/
void Printlist(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	L.push_front(100);
	L.push_front(100);
	L.push_front(100);
	Printlist(L);

	L.pop_back();
	Printlist(L);

	L.pop_front();
	Printlist(L);

	L.insert(L.begin(), 1000);
	Printlist(L);
	//删除：
	L.erase(L.begin());
	Printlist(L);
	//移除：
	L.remove(100);
	Printlist(L);
	//清空
	L.clear();
	Printlist(L);
}
int main()
{
	test01();
	system("pause");
	return 0;
}