#include<iostream>
using namespace std;
/*
字符串的比较:
1.字符串的比较是按字符的ascii码进行比较
=返回0
>返回1
<返回-1
2.函数原型：
int compare(const string &str) const
int compare(const char* s) const
3.总结：
字符串对比主要是比较两个字符串是否相等，判断谁大谁小并无意义
*/
void test01()
{
	string str1 = "bello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1 == str2 " << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 > str2" << endl;
	}
	else 
	{
		cout << "str1 < str2" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}