#include<iostream>
using namespace std;
/*
���ã�Ϊ�����������������һ��ָ�볣��
1.�����﷨����������& ������ = ������
2.ע�⣺
 1.���ñ����ʼ����int&b;�Ǵ����
 2.���ó�ʼ�����������������ٴ�ʹ��
 3.���õĵ�ַ��ԭ�����ĵ�ַ��ͬ���ı�����һ��ֵ���߾��ᱻ�ı�
*/
int main()
{  
	int a = 10;
	int& b = a;
	cout << "a:" << a << endl;
	cout <<"b:" <<b << endl;
	b = 100;
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "id(a):" << &a << endl;
	cout << "id(b):" << &b << endl;
	system("pause");
	return 0;
}