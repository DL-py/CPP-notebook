#include<iostream>
using namespace std;
/*
�ַ��������ɾ����
1.���룺
 1.string& insert(int pos, const char* s):�����ַ���
 2.string& insert(int pos, const string &str):�����ַ���
 3.string& insert(int pos, int n, char c):��ָ��λ�ò���n��c
2.ɾ����
string& erase(int pos, int n=npos):ɾ����pos��ʼ��n���ַ�
3.�ܽ᣺
�����ɾ������ʼλ�ö��Ǵ�0��ʼ
*/
void test01()
{
	string str = "hello";
	str.insert(1, "111");
	cout << "str = " << str << endl;
	str.erase(1, 3);//��1��λ��ɾ��3���ַ�
	cout << "str = " << str << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}