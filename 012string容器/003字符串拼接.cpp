#include<iostream>
using namespace std;
/*
字符串拼接：
1.string& operator+=(const char* str):重载+=运算符
2.string& operator+=(const char c):重载+=运算符
3.string& operator+=(const string &str):重载+=运算符
4.string& append(const char* s)将字符串s连接到当前字符串的结尾
5.string& append(const char* s,int n)将字符串s中前n个字符连接到当前字符串的结尾
6.string& append(const string &str):同string& operator+=(const string &str)
7.string& append(const string &str, int pos,int n):字符串s中从pos开始的n个字符连接到字符串结尾
*/
void test01()
{
	string str1 = "我";
	str1 += "爱玩游戏";
	cout<< "str1 = " << str1 << endl;
	str1 += ':';
	cout << "str1 = " << str1 << endl;
	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 ;
	str3 = 'I';
	str3.append("love");
	cout << "str3 = " << str3 << endl;
	str3.append("game abcd", 4);
	cout << "str3 = " << str3 << endl;
	str3.append(str2);
	cout << "str3 = " << str3 << endl;
	str3.append(str2, 0, 3);
	cout << "str3 = " << str3 << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}