#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
/*
反转和排序：
1.reverse():反转链表
2.sort():(成员函数)链表排序
*/
void Printlist(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1,int v2)
{
	//降序 让第一个数大于第二个数
	return v1 > v2;
}
void test01()
{
	list<int> L;
	L.push_back(10);
	L.push_back(40);
	L.push_back(30);
	L.push_back(20);
	Printlist(L);
	L.reverse();
	Printlist(L);
	//排序：
	//sort(L.begin(), L.end());所有不支持随机访问的迭代器的容器，不可以用标准算法
	L.sort(myCompare);//默认升序
	Printlist(L);

}
int main()
{
	test01();
	system("pause");
	return 0;
}