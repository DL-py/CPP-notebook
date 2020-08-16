#include<iostream>
using namespace std;
/*
字符串的查找和替换：
1.查找：
int find(const string &str, int pos=0) const：从pos开始查找str第一次出现的位置
int rfind(const string &str, int pos=0) const
find 和rfind 的区别：rfind是从右向左找
2.替换：
string& replace(int pos, int n，const string &str):从pos开始n个字符替换为str
*/
void test01()
{
	string str1 = "abcdefgde";
	//find
	int pos1 = str1.find("de");
	if (pos1 == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串，pos = " << pos1 << endl;
	}
	//rfind
	int pos2 = str1.rfind("de");
	if (pos2 == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到字符串，pos = " << pos2 << endl;
	}
}
void test02()
{
	string str1 = "abcde";
	str1.replace(1, 3, "1111");
	cout << "str1 = " << str1 << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}