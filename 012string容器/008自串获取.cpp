#include <iostream>
using namespace std;
/*
�Ӵ���ȡ������
string substr(int pos=0,int n=npos):���ش�pos��ʼ��n���ַ���ϵ��ַ���

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