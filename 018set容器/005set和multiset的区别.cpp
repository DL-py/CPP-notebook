#include <iostream>
#include <set>
using namespace std;
/*
set��multiset������
 1.set���������������ظ�������
 2.multiset�������������ظ�������
 3.set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
 4.multiset�����⣬��˿��Բ����ظ�����
*/
void Printmultiset(const multiset<int>& ms)
{
	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> st1;
	pair<set<int>::iterator,bool> ret = st1.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}
	ret = st1.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	Printmultiset(ms);
}
int main()
{
	test01();
	system("pause");
	return 0;
}