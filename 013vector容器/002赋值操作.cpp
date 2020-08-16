#include<iostream>
#include <vector>
using namespace std;
/*
赋值操作：
1.vector& operator=(const vector &vec)//重载等号操作符
2.assign(beg, end)//将[beg,end)区间的数据拷贝赋值给本身
3.assign(n,elem)//将n个elem拷贝赋值给本身
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
	//赋值 operator=
	vector<int>v2;
	v2 = v1;
	Printvector(v2);
	//assign(beg,end)
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	Printvector(v3);
	//assign(n, elem)
	vector<int>v4;
	v4.assign(10, 100);
	Printvector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}