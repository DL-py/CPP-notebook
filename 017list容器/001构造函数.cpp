#include <iostream>
using namespace std;
#include <list>
/*
���캯����
1.list<T> list��list����ģ����ʵ�֣������Ĭ�Ϲ�����ʽ
2.list<T> list(beg,end):���캯����[beg,end)�����Ԫ�ؿ���������
3.list<T> list(n,elem):���캯����n��elem����������
4.list<T> list(const list &list):�������캯��
*/
void PrintList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	    cout << endl;
}
void test01()
{
	list<int> L1;//Ĭ�Ϲ���
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	PrintList(L1);
	//���䷽ʽ����
	list<int> L2(L1.begin(), L1.end());
	PrintList(L2);
	//n��elem���죺
	list<int>L3(10,100);
	PrintList(L3);
	//�������캯����
	list<int> L4(L3);
	PrintList(L4);

	          
}
int main()
{
	test01();
	system("pause");
	return 0;
}