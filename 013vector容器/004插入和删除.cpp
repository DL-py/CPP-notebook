#include<iostream>
#include <vector>
using namespace std;
/*
插入和删除：
1.push_back(ele):尾部插入元素ele
2.pop_back():删除最后一个元素
3.insert(const_iterator pos,  ele);迭代器指向位置pos插入元素ele
4.insert(const_iterator pos,int count, ele)迭代器指向位置pos插入conunt个元素ele
5.erase(const_iterator pos):删除迭代器指向位置的元素
6.erase(const_iterator start, const_iterator end)删除迭代器从start到end之间的元素
7.clear():删除容器中所有的元素
*/
void Printvector(vector<int> &p)
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
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	Printvector(v1);
	v1.pop_back();//尾删
	Printvector(v1);
	//插入:
	v1.insert(v1.begin(),100);
	Printvector(v1);
	v1.insert(v1.begin(),2, 200);
	Printvector(v1);
	//删除：参数是迭代器
	v1.erase(v1.begin());
	Printvector(v1);
	//清空
	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	Printvector(v1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}