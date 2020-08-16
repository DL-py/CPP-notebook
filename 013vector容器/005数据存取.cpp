#include<iostream>
using namespace std;
#include <vector>
/*
数据存取：
1.at(int idx):返回索引idx所指的数据
2.operator[inx]:返回索引idx所指的数据
3.front():返回容器中第一个元素
4.back():返回容器中最后一个数据元素
*/

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//利用[]方式访问元素
	for (int i = 0; i < v1.size(); i++)
	{
		cout<<v1[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	cout << "v1的第一个元素为：" << v1.front() << endl;
	cout << "v1的最后一个元素为：" << v1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}