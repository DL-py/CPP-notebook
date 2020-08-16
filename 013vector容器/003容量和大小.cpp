#include<iostream>
#include <vector>
using namespace std;
/*
容量和大小：
1.容量:
 1.empty():判断容量是否为空
 2.capacity():容器的容量
 3.
2.大小:
 1.size():返回容器中元素的个数
 2.resize(int num)：重新指定容器的长度为num,若容器变长，则以默认值填充新位置
                    若容器变短，则末尾超出容器长度的元素被删除。
 3.resize(int num,ele):重新指定容器的长度为num,若容器变长，则以ele填充新位置
                    若容器变短，则末尾超出容器长度的元素被删除。
*/
void Printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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
	Printvector(v1);
	if (v1.empty())//为真代表v1为空
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量: " << v1.capacity() << endl;
		cout << "v1的大小: " << v1.size() << endl;//大小：元素的个数
	}
	//重新指定大小：
	v1.resize(15);
	Printvector(v1);
	v1.resize(20, 10);
	Printvector(v1);
	v1.resize(5);
	Printvector(v1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}