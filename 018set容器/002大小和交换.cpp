#include <iostream>
#include <set>
using namespace std;
/*
大小和替换：
1.大小：
 1.empty():判断容器是否胃口弄个
 2.size():返回容器的大小
3.替换：
 1.swap(st):交换两个集合容器
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
	set<int> st2;
	st2.insert(300);
	st2.insert(100);
	st2.insert(200);
	st2.insert(400);
	Printset(st1);
	if (st1.empty())
	{
		cout << "st1为空" << endl;
	}
	else
	{
		cout << "st1不为空" << endl;
		cout << "st1的大小为: " << st1.size() << endl;
	}
	//交换操作：
	cout << "交换前：" << endl;
	Printset(st1);
	Printset(st2);

	st1.swap(st2);
	cout << "交换后： " << endl;
	Printset(st1);
	Printset(st2);

}
int main()
{
	test01();
	system("pause");
	return 0;
}