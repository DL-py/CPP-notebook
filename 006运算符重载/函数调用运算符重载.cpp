#include <iostream>
using namespace std;
/*
�������������()���أ�
1.�������غ�ʹ�õķ�ʽ�ǳ��뺯�����ã���˳�Ϊ�º���
2.�º���û�й̶���д�����ǳ����
*/
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test01()
{
	MyPrint p;
	p("hello world");
}
void test02()//�º����ǳ����
{
	MyAdd p1;
	cout << p1(1, 2) << endl;
	//������������:ִ��һ�����ͱ��ͷ�
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}