#include <iostream>
#include <map>
using namespace std;
/*
构造和赋值：
1.构造：
 1.map<T1, T2> mp:默认构造
 2.map& map<T1,T2> mp2(const map<T1,T2> &mp1):拷贝构造
2.赋值：
map& operator=(const map &mp):重载等号运算符
注意：map中所有元素都是成对出现，插入数据时要采用对组方式
*/
void Printmap(const map<int, int>& mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << (*it).first << " value= " << (*it).second << endl;
	}
}
void test01()
{
	map<int, int>mp1;//默认构造函数
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(3, 30));
	mp1.insert(pair<int, int>(2, 20));
	mp1.insert(pair<int, int>(4, 40));
	Printmap(mp1);//自动排序
	//拷贝构造函数：
	map<int, int> mp2(mp1);
	Printmap(mp2);
	//赋值操作:
	map<int, int> mp3;
	mp3 = mp2;
	Printmap(mp3);
}
int main()
{
	test01();
	system("pause");
	return 0;
}