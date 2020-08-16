#include <iostream>
using namespace std;
/*
子串获取操作：
string substr(int pos=0,int n=npos):返回从pos起始的n个字符组合的字符串

*/
void test01()
{
	string str = "abcdef";
	string substr = str.substr(1, 3);
	cout << "substr = " << substr << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}