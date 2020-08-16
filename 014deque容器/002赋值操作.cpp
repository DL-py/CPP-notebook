#include<iostream>
#include <deque>
using namespace std;
/*
赋值操作：
1.deque& operator=(const deque &deq)//重载等号运算符
2.assign(beg,end)//将[beg,end)中的数据拷贝赋值给本身
3.assign(n,elem)//将n个elem拷贝赋值给本身
总结：deque的赋值操作和vector操作类似
*/
void Printdeque(const deque<int>& d)
{
	//const_iterator表示只读迭代器
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	Printdeque(d1);
	deque<int> d2;
	d2 = d1;
	Printdeque(d2);
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	Printdeque(d3);
	deque<int> d4;
	d4.assign(10, 100);
	Printdeque(d4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}