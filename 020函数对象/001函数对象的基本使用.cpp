#include <iostream>
using namespace std;
/*
�������󣨷º������Ļ���ʹ�ã�
1.�ص㣺
 1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
 2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
 3.�������������Ϊ��������
*/
class MyAdd
{
public:
	int operator()(int a1, int a2)
	{
		return a1 + a2;
	}
};
void test01()//����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
{
	int a = 10;
	int b = 20;
	MyAdd myadd;
	cout << myadd(a, b) << endl;
}
class MyPrint
{
public:
	MyPrint()
	{
		count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}
	int count;//�ڲ�״̬
};
void test02()//�������󳬳���ͨ�����ĸ����������������Լ���״̬
{
	MyPrint myprint;
	myprint("hello world!");
	myprint("hello world!");
	myprint("hello world!");
	myprint("hello world!");
	cout << "MyPrint���õĴ�����" << myprint.count << endl;
}
void doPrint(MyPrint& mp, string test)//�������������Ϊ��������
{
	mp(test);
}
void test03()
{
	MyPrint myprint;
	doPrint(myprint, "hello world");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}