#include<iostream>
#include<deque>
using namespace std;
/*
插入和删除：
1.两端插入操作：
 1.push_back(elem):在容器尾部添加一个数据
 2.push_front(elem):在容器头部添加一个数据
 3.pop_back():删除容器最后一个数据
 4.pop_front():删除容器第一个数据
2.指定位置操作：
 1.insert(pos, elem):在pos位置插入一个elem元素的拷贝，返回新数据的位置
 2.insert(pos,n,elem):在pos位置插入n个elem数据，无返回值
 3.insert(pos,beg,end):在pos位置插入[beg,end)区间的数据，无返回值
 4.clear():清楚容器中所有数据
 5.erase(beg,end):删除[beg,end)区间的数据，返回下一个数据的位置
 6.erase(pos):删除pos位置数据，返回下一个数据的位置
*/
void Printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d1;
	//尾插：
	d1.push_back(10);
	d1.push_back(20);
	//头插：
	d1.push_front(100);
	d1.push_front(200);
	Printdeque(d1);
	//尾删：
	d1.pop_back();
	Printdeque(d1);
	//头删：
	d1.pop_front();
	Printdeque(d1);
}
void test02()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	Printdeque(d1);
	d1.insert(d1.begin(), 1000);
	Printdeque(d1);
	d1.insert(d1.begin(), 2, 10000);
	Printdeque(d1);
	deque<int> d2;
	d2.insert(d2.begin(), d1.begin(), d1.end());
	Printdeque(d2);
}
void test03()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	Printdeque(d1);
	deque<int>::iterator it = d1.begin();
	it++;

	d1.erase(it);
	Printdeque(d1);

	//按区间删除：
	//d1.erase(d1.begin(),d1.end());

	//清空：
	d1.clear();
	Printdeque(d1);


}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}