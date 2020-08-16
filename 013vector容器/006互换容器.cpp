#include<iostream>
#include <vector>
using namespace std;
/*
互换容器：
1.v1.swap(v2):互换容器
*/
void Printvector(vector<int>& p)
{
	for (vector<int>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "交换前:" << endl;
	Printvector(v1);
	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	Printvector(v2);
	cout << "交换后：" << endl;
	v1.swap(v2);
	Printvector(v1);
	Printvector(v2);
}
void test02()//巧用swap可以收缩内存空间
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量： " << v.capacity() << endl;
	cout << "v的大小： " << v.size() << endl;
	v.resize(3);
	cout << "v的容量： " << v.capacity() << endl;
	cout << "v的大小： " << v.size() << endl;
	//巧用swap来收缩内存；
	vector<int>(v).swap(v);//vector<int>(v)--匿名对象，执行完当前语句，内存会被自动回收
	cout << "v的容量： " << v.capacity() << endl;
	cout << "v的大小： " << v.size() << endl;
}
int main()
{
	//test01();
	int i = 1;
	int* p = &i;
	cout << *p << endl;
	
	test02(); 
	system("pause");
	return 0;
}
