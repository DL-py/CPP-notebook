#include <iostream>
#include <list>
using namespace std;
/*
数据存取：
1.front():返回容器中第一个元素
2.back():返回容器中最后一个元素
注意：
list的本质是一个链表，不是用连续线性空间储存数据，迭代器是双向迭代器,不支持at和[]进行存取

*/
void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	cout << "L1的第一个数据为："<<L1.front() << endl;
	cout << "L1的最后一个数据为：" << L1.back() << endl;
	//验证list的迭代器不支持 随机访问
	list<int>::iterator it = L1.begin();
	it++;//支持it++ it--
	//it = it + 1;不支持随机访问
}
int main()
{
	test01();
	system("pause");
	return 0;
}