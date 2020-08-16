#include <iostream>
#include <list>
using namespace std;
/*
�����ɾ����
1.push_back():������β������һ������
2.pop_back():ɾ�����������һ��Ԫ��
3.push_front():��������ͷ����һ������
4.pop_front():ɾ�������е�һ��Ԫ��
5.insert(pos,elem):��posλ�ò���elemԪ�صĿ��������������ݵ�λ��
6.insert(pos,n,elem):��posλ�ò���n��elemԪ�صĿ������޷���ֵ
7.insert(pos,beg,end):��posλ�ò���[beg,end)�������ݵĿ������޷���ֵ
8.clear():�Ƴ����������е�����
9.erase(beg,end):�Ƴ�[beg,end)��������ݣ�������һ�����ݵ�λ��
10.erase(pos):ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
11.remove(elem):�Ƴ�������������elemƥ���Ԫ��
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

	L.push_front(100);
	L.push_front(100);
	L.push_front(100);
	Printlist(L);

	L.pop_back();
	Printlist(L);

	L.pop_front();
	Printlist(L);

	L.insert(L.begin(), 1000);
	Printlist(L);
	//ɾ����
	L.erase(L.begin());
	Printlist(L);
	//�Ƴ���
	L.remove(100);
	Printlist(L);
	//���
	L.clear();
	Printlist(L);
}
int main()
{
	test01();
	system("pause");
	return 0;
}