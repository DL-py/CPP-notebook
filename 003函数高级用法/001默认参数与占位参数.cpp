#include<iostream>
using namespace std;
/*
Ĭ�ϲ�����ռλ������
Ĭ�ϲ�����
1.��������ʱ���Ѿ�Ϊ�βθ�ֵ������ʱ���Բ��ô������
2.ע�⣺
 1.��Ĭ�ϲ������βκ���������βζ�Ҫ��Ĭ�ϲ���
 2.��������Ĭ�ϲ�������ʱ������Ĭ�ϲ���
*/

int sum(int a, int b=20, int c=40)
{
	int sum;
	sum = a + b + c;
	return sum;
}

int func(int a = 10, int b = 20);
int func(int a,int b)
{
	return a + b;
}

/*
ռλ������ֻ�б���������
1.ռλ����������Ĭ�ϲ���
*/
void func2(int a,int )
{
	cout << "this is a func2" << endl;
}

void func3(int a, int=10)
{
	cout << "this is a func3" << endl;
}



int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	cout << "sum=" << sum(a, b, c) << endl;
	cout << "sum=" << sum(a) << endl;
	func2(10,10);
	func3(10);

	system("pause");
	return 0;
}