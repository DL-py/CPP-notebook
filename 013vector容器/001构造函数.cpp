#include <iostream>
#include <vector>
using namespace std;
/*
构造函数：创建vector容器
1.vector<T> v:默认构造函数
2.vector<T> v2(v1.begin(),v1.end()):将[v.begin(),v.end())区间中的元素拷给本身
3.vector<T> v(n,elem):构造函数将n个elem拷给本身
4.vector<T> v(const vector &vec):拷贝构造函数（常用）
*/
void Printvector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;//默认构造函数
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	Printvector(v1);
	
	vector<int> v2(v1.begin(), v1.end());//利用区间进行构造
	Printvector(v2);

	vector<int> v3(10,100);//n个elem
	Printvector(v3);

	vector<int> v4(v3);
	Printvector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}