#include <iostream>
#include <list>
using namespace std;
/*
���ݴ�ȡ��
1.front():���������е�һ��Ԫ��
2.back():�������������һ��Ԫ��
ע�⣺
list�ı�����һ�������������������Կռ䴢�����ݣ���������˫�������,��֧��at��[]���д�ȡ

*/
void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	cout << "L1�ĵ�һ������Ϊ��"<<L1.front() << endl;
	cout << "L1�����һ������Ϊ��" << L1.back() << endl;
	//��֤list�ĵ�������֧�� �������
	list<int>::iterator it = L1.begin();
	it++;//֧��it++ it--
	//it = it + 1;��֧���������
}
int main()
{
	test01();
	system("pause");
	return 0;
}