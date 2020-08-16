#include <iostream>
#include <list>
using namespace std;
/*
赋值和交换：
1.赋值：
 1.assign(beg,end)：将[beg,end)区间的数据拷贝赋值给本身
 2.assign(n,elem):将n个elem拷贝赋值给本身
 3.list& operator=(const list &list):重载拷贝运算符
2.交换：
 1.swap(list):将list与本身元素交换
*/
void Printlist(const list<int> &l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
    }
	cout << endl;

}
void test01()//赋值
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	Printlist(L1);
	
	list<int>L2;
	L2 = L1;
	Printlist(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	Printlist(L3);

	list<int>L4;
	L4.assign(10, 100);
	Printlist(L4);
}
void test02()//交换
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	list<int>L2;
	L2.assign(10, 100);
	Printlist(L1);
	Printlist(L2);
	L1.swap(L2);
	Printlist(L1);
	Printlist(L2);
}
int main ()
{
	//test01();
	test02();
	system("pause");
	return 0;
}