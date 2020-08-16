#include <iostream>
using namespace std;
#include <list>
/*
构造函数：
1.list<T> list：list采用模板类实现，对象的默认构造形式
2.list<T> list(beg,end):构造函数将[beg,end)区间的元素拷贝给本身
3.list<T> list(n,elem):构造函数将n个elem拷贝给本身
4.list<T> list(const list &list):拷贝构造函数
*/
void PrintList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	    cout << endl;
}
void test01()
{
	list<int> L1;//默认构造
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	PrintList(L1);
	//区间方式构造
	list<int> L2(L1.begin(), L1.end());
	PrintList(L2);
	//n个elem构造：
	list<int>L3(10,100);
	PrintList(L3);
	//拷贝构造函数：
	list<int> L4(L3);
	PrintList(L4);

	          
}
int main()
{
	test01();
	system("pause");
	return 0;
}