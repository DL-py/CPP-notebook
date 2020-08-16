#include <iostream>
#include <map>
using namespace std;
/*
插入和删除：
1.insert(elem):在容器中插入元素
2.clear():清楚所有元素
3.erase(pos):删除pos迭代器所指的元素，返回下一个元素的迭代器
4.erase(beg,end):删除区间[beg,end)的所有元素，返回下一个元素的迭代值
5.erase(key):删除容器中键值为为key的元素
*/
void Printmap(const map<int, int>& mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << (*it).first << "value= " << (*it).second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int>m;
	//插入：第一种
	m.insert(pair<int, int>(1, 10));
	//插入：第二种
	m.insert(make_pair(2, 20));
	//插入：第三种
	m.insert(map<int, int>::value_type(3, 30));
	//插入：第四种
	m[4] = 40; 
	//[]不建议去插数，用途：可以用key来访问value
	cout << m[5] << endl;
	Printmap(m);
	//删除：
	m.erase(m.begin());
	Printmap(m);
	m.erase(3);//按照key删除
	Printmap(m);
	//清空：
	m.erase(m.begin(), m.end());
	m.clear();
	Printmap(m);
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}