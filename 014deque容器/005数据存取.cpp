#include<iostream>
#include <deque>
using namespace std;
/*
数据存取：
1.at(int idx):返回索引idx所指的数据
2.operator[]:返回索引idx所指的数据
3.front():返回容器中第一个数据
4.back():返回容器中最后一个数据
*/
void test01()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);
	d1.push_back(50);
	d1.push_back(60);
	//利用[]访问：
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;
	cout << "第一个元素为：" << d1.front() << endl;
	cout << "最后一个元素为：" << d1.back() << endl;
	 
}
int main()
{
	test01();
	system("pause");
	return 0;
}