#include <iostream>
using namespace std;
/*
�������أ���ߺ����ĸ�����
1.������ͬ����������ͬ����������ͬ������ֵ��ͬ
2.������ͬ����Ŀ�����͡�˳��
3.���ص���ʽ�кܶ��֣�����Ҫ��֤����֮�䲻�ܷ�����ͻ
*/

//void func()
//{
//	cout << "����func()" << endl;
//}

//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}

//void func(int& a)//������Ϊ����
//{
//	cout << "����func(int& a)" << endl;
//}

//void func(const int& a)
//{
//	cout << "����func(const int& a)" << endl;
//}

void func(int a=10)
{
	cout << "����void func(int a=10)" << endl;
}

int main()
{
	int a;
	func();
	system("pause");
	return 0;
}