#include <iostream>
#include <set>
using namespace std;
/*
内置类型指定排序规则：
利用仿函数可以改变排序规则
*/
class Mycompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};
void Printset(const set<int>& st) 
{
	for (set<int>::const_iterator it = st.begin(); it != st.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	Printset(s1);
	set<int, Mycompare> s2;
	s2.insert(10);
	s2.insert(20);
	s2.insert(30);
	s2.insert(40);
	for(set<int, Mycompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	      cout << endl;
}      

int main()
{
	test01();
	system("pause");
	return 0;
}