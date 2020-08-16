#include <iostream>
#include <list>
using namespace std;
/*
��ֵ�ͽ�����
1.��ֵ��
 1.assign(beg,end)����[beg,end)��������ݿ�����ֵ������
 2.assign(n,elem):��n��elem������ֵ������
 3.list& operator=(const list &list):���ؿ��������
2.������
 1.swap(list):��list�뱾��Ԫ�ؽ���
*/
void Printlist(const list<int> &l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
    }
	cout << endl;

}
void test01()//��ֵ
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	Printlist(L1);
	
	list<int>L2;
	L2 = L1;
	Printlist(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	Printlist(L3);

	list<int>L4;
	L4.assign(10, 100);
	Printlist(L4);
}
void test02()//����
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	list<int>L2;
	L2.assign(10, 100);
	Printlist(L1);
	Printlist(L2);
	L1.swap(L2);
	Printlist(L1);
	Printlist(L2);
}
int main ()
{
	//test01();
	test02();
	system("pause");
	return 0;
}