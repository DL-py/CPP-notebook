#include <iostream>
#include <map>
using namespace std;
/*
查找和统计：
1.find(key):查找key是否存在，若存在，返回该键的元素的迭代器，若不存在，
返回set.end()
2.count(key):返回key的元素个数
*/
void test01()
{
	map<int, int>mp;
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(3, 30));
	//查找：
	map<int,int>::iterator it = mp.find(3);
	if (it != mp.end())
	{
		cout << "查到了元素key= " << (*it).first<<"value = "<<(*it).second << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
	//统计：
	int n = mp.count(3);
	cout << "n = " << n << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}