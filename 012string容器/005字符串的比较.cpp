#include<iostream>
using namespace std;
/*
�ַ����ıȽ�:
1.�ַ����ıȽ��ǰ��ַ���ascii����бȽ�
=����0
>����1
<����-1
2.����ԭ�ͣ�
int compare(const string &str) const
int compare(const char* s) const
3.�ܽ᣺
�ַ����Ա���Ҫ�ǱȽ������ַ����Ƿ���ȣ��ж�˭��˭С��������
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