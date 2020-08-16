#include <iostream>
#include <deque>
using namespace std;
/*
大小操作：
1.deque.empty():判断容器是否为空
2.deque.size():返回容器中元素的个数
3.deque.resize(num):指定容器的长度为num,若容器变长，则以默认值填充新位置
                    如果容器变短，则末尾超出容器长度的元素被删除。
4.deque.resize(num,elem):指定容器的长度为num,若容器变长，则以elem填充新位置
                    如果容器变短，则末尾超出容器长度的元素被删除。
deque没有容量
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
	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为： " << d1.size() << endl;
	}
	d1.resize(15);
	Printdeque(d1);
	d1.resize(15, 1);
	Printdeque(d1);
	d1.resize(5);
	Printdeque(d1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}