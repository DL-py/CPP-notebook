#include <iostream>
#include <map>
using namespace std;
/*
排序：
利用仿函数，可以改变排序规则
*/
class Mycompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};
void Printmap(const map<int, int, Mycompare>& mp)
{
	for (map<int, int, Mycompare>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << (*it).first << " value= " << (*it).second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int,Mycompare> mp;
	mp.insert(make_pair(1, 10));
	mp.insert(make_pair(2, 20));
	mp.insert(make_pair(3, 30));
	mp.insert(make_pair(4, 40));
	Printmap(mp);
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}