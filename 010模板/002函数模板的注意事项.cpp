#include <iostream>
using namespace std;
/*
����ģ���ע�����
1.�Զ������Ƶ��������Ƶ���һ�µ���������T����ʹ��
2.ģ�����Ҫȷ����T���������Ͳſ���ʹ��
*/
template <class T>
void myswap(T & a, T & b)
{
	T temp;
	temp = b;
	b = a;
	a = temp;
}
template <class T>
void func()
{
	cout << "func()�ĵ���" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//myswap(a, c);�Զ������Ƶ���һ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
void test02()
{
	//func();ģ�����Ҫȷ����T���������Ͳſ���ʹ��
	//��ʱ�޷������Զ��Ƶ�
	func<int>();
}
int main()
{
	//test01();
	void test02();
	system("pause");
	return 0;
}