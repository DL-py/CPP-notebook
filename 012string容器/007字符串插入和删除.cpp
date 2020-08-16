#include<iostream>
using namespace std;
/*
字符串插入和删除：
1.插入：
 1.string& insert(int pos, const char* s):插入字符串
 2.string& insert(int pos, const string &str):插入字符串
 3.string& insert(int pos, int n, char c):在指定位置插入n个c
2.删除：
string& erase(int pos, int n=npos):删除从pos开始的n个字符
3.总结：
插入和删除的起始位置都是从0开始
*/
void test01()
{
	string str = "hello";
	str.insert(1, "111");
	cout << "str = " << str << endl;
	str.erase(1, 3);//从1号位置删除3个字符
	cout << "str = " << str << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}