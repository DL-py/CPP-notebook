#include<iostream>
using namespace std;
/*
��ͨ�����뺯��ģ�������
1.��ͨ�����ڵ���ʱ���Է����Զ�����ת������ʽ����ת����
2.����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
3.���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��
*/
int myAdd01(int a, int b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << myAdd01(a, c) << endl;//��������ʽ����ת����char -> int
}
template<typename T>
T myAdd02(T a, T b)
{
	return a + b;
}
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';
   //cout << myAdd02(a, c) << endl;�Զ������Ƶ����ú���ģ�岻�ܷ�����ʽ����ת��
     cout << myAdd02<int>(a, c) << endl;//��ʾָ�����Ϳ��Խ�����ʽ����ת��
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}