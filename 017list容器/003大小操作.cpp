#include<iostream>
#include<list>
using namespace std;
/*
��С������
1.size():����������Ԫ�صĸ���
2.empty():�ж������Ƿ�Ϊ��
3.resize(num):����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ��
              ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
4.resize(num,elem):����ָ�������ĳ���Ϊnum,�������䳤������elem�����λ��
              ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*/
void Printlist(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}
void test01()
{
	list<int> L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);
	Printlist(L);
	if (L.empty())
	{
		cout << "LΪ��" << endl;
	}
	else
	{
		cout << "L��Ϊ��" << endl;
		cout << "L�ĸ���Ϊ��" << L.size() << endl;
	}
	L.resize(5);
	Printlist(L);
	L.resize(6,50);
	Printlist(L);
	L.resize(4);
	Printlist(L);
}
int main()
{
	test01();
	system("pause");
	return 0;
}