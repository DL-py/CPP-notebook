#include<iostream>
using namespace std;
/*
�ַ���ƴ�ӣ�
1.string& operator+=(const char* str):����+=�����
2.string& operator+=(const char c):����+=�����
3.string& operator+=(const string &str):����+=�����
4.string& append(const char* s)���ַ���s���ӵ���ǰ�ַ����Ľ�β
5.string& append(const char* s,int n)���ַ���s��ǰn���ַ����ӵ���ǰ�ַ����Ľ�β
6.string& append(const string &str):ͬstring& operator+=(const string &str)
7.string& append(const string &str, int pos,int n):�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/
void test01()
{
	string str1 = "��";
	str1 += "������Ϸ";
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