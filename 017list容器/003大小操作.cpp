#include<iostream>
#include<list>
using namespace std;
/*
大小操作：
1.size():返回容器中元素的个数
2.empty():判断容器是否为空
3.resize(num):重新指定容器的长度为num,若容器变长，则以默认值填充新位置
              如果容器变短，则末尾超出容器长度的元素被删除
4.resize(num,elem):重新指定容器的长度为num,若容器变长，则以elem填充新位置
              如果容器变短，则末尾超出容器长度的元素被删除
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
	L.push_back(40);
	Printlist(L);
	if (L.empty())
	{
		cout << "L为空" << endl;
	}
	else
	{
		cout << "L不为空" << endl;
		cout << "L的个数为：" << L.size() << endl;
	}
	L.resize(5);
	Printlist(L);
	L.resize(6,50);
	Printlist(L);
	L.resize(4);
	Printlist(L);
}
int main()
{
	test01();
	system("pause");
	return 0;
}