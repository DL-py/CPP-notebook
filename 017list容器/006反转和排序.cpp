#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
/*
��ת������
1.reverse():��ת����
2.sort():(��Ա����)��������
*/
void Printlist(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1,int v2)
{
	//���� �õ�һ�������ڵڶ�����
	return v1 > v2;
}
void test01()
{
	list<int> L;
	L.push_back(10);
	L.push_back(40);
	L.push_back(30);
	L.push_back(20);
	Printlist(L);
	L.reverse();
	Printlist(L);
	//����
	//sort(L.begin(), L.end());���в�֧��������ʵĵ��������������������ñ�׼�㷨
	L.sort(myCompare);//Ĭ������
	Printlist(L);

}
int main()
{
	test01();
	system("pause");
	return 0;
}