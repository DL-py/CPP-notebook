#include<iostream>
using namespace std;
/*
�ַ����Ĳ��Һ��滻��
1.���ң�
int find(const string &str, int pos=0) const����pos��ʼ����str��һ�γ��ֵ�λ��
int rfind(const string &str, int pos=0) const
find ��rfind ������rfind�Ǵ���������
2.�滻��
string& replace(int pos, int n��const string &str):��pos��ʼn���ַ��滻Ϊstr
*/
void test01()
{
	string str1 = "abcdefgde";
	//find
	int pos1 = str1.find("de");
	if (pos1 == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����pos = " << pos1 << endl;
	}
	//rfind
	int pos2 = str1.rfind("de");
	if (pos2 == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ��ַ�����pos = " << pos2 << endl;
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