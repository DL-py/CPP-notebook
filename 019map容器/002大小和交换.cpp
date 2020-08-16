#include <iostream>
#include <map>
using namespace std;
/*
大小和交换：
1.empty():判断容器是否为空
2.size():返回容器中元素的数目
3.swap(mp):交换两个集合容器
*/
void Printmap(const map<int,int> &mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << (*it).first << "value= " << (*it).second << endl;
    }
	cout << endl;
}
void test01()
{
	map<int, int>mp1;
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(2, 20));
	mp1.insert(pair<int, int>(3, 30));
	map<int, int>mp2;
	mp2.insert(pair<int, int>(4, 100));
	mp2.insert(pair<int, int>(5, 200));
	mp2.insert(pair<int, int>(6, 300));
	if (mp1.empty())
	{
		cout << "mp1为空" << endl;
	}
	else
	{
		cout << "mp1不为空" << endl;
		cout << "mp1的大小为: " << mp1.size() << endl;
	}
	cout << "交换前：" << endl;
	Printmap(mp1);
	Printmap(mp2);
	mp1.swap(mp2);
	cout << "交换后：" << endl;
	Printmap(mp1);
	Printmap(mp2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}