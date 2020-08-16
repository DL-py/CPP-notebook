#include <iostream>
#include <set>
using namespace std;
/*
构造和赋值操作：
1.构造：
 1.set<T> st:默认构造函数
 2.set<T> st2(st1):拷贝构造函数
2.赋值
set& operator=(const set &st):重载等号运算符
3.插入数据
insert(elem)
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
	st1.insert(30);
	st1.insert(40);
	st1.insert(10);
	st1.insert(20);
	Printset(st1);
	//拷贝构造：
	set<int> st2(st1);
	Printset(st2);
	//赋值操作：
	set<int> st3;
	st3 = st2;
	Printset(st3);


}
int main()
{
	test01();
	system("pause");
	return 0;
}