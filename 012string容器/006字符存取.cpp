#include <iostream>
using namespace std;
/*
�ַ���ȡ��
1.char& operator[](int n):ͨ��[]��ʽȡ�ַ�
2.char& at(int n):ͨ��at������ȡ�ַ�
*/
void test01()
{
	string str1 = "hello";
	cout << str1 << endl;
	//ͨ��[]���ʵ����ַ���
	for (int i = 0;i<str1.size();i++)
	{
		cout << str1[i] << " ";
	}
	cout << endl;
	//ͨ��at���ʵ����ַ���
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1.at(i)<< " ";
	}
	cout << endl;
	//�޸ĵ����ַ���
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