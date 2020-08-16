#include <iostream>
#include <deque>
using namespace std;
/*
��С������
1.deque.empty():�ж������Ƿ�Ϊ��
2.deque.size():����������Ԫ�صĸ���
3.deque.resize(num):ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ��
                    ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
4.deque.resize(num,elem):ָ�������ĳ���Ϊnum,�������䳤������elem�����λ��
                    ���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
dequeû������
*/
void Printdeque(const deque<int>& d)
{
	//const_iterator��ʾֻ��������
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	Printdeque(d1);
	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ�� " << d1.size() << endl;
	}
	d1.resize(15);
	Printdeque(d1);
	d1.resize(15, 1);
	Printdeque(d1);
	d1.resize(5);
	Printdeque(d1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}