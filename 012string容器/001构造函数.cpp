#include <iostream>
using namespace std;
/*
string的构造函数：
1.string():默认构造，创建一个空字符串
2.string(const char* s):使用字符串s初始化
3.string(const string &str):拷贝构造，使用一个string对象初始化另一个string对象
4.string(int n, char c):使用n个字符c初始化
*/
void test01()
{
	string s1;//默认构造
	
	const char* str = "hello world";
	string s2(str);
	cout << "s2= " << s2 << endl;

	string s3(s2);
	cout << "s3= " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}