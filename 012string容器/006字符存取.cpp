#include <iostream>
using namespace std;
/*
字符存取：
1.char& operator[](int n):通过[]方式取字符
2.char& at(int n):通过at方法存取字符
*/
void test01()
{
	string str1 = "hello";
	cout << str1 << endl;
	//通过[]访问单个字符：
	for (int i = 0;i<str1.size();i++)
	{
		cout << str1[i] << " ";
	}
	cout << endl;
	//通过at访问单个字符：
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i)<< " ";
	}
	cout << endl;
	//修改单个字符：
	str1[0] = 'x';
	cout << str1 << endl;
	str1.at(1) = 'x';
	cout << str1 << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}