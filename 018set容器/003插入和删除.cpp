#include <iostream>
#include <set>
using namespace std;
/*
�����ɾ����
1.���룺
 1.insert():�������в�������
2.ɾ����
 1.clear():��������е���������
 2.erase(pos):ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
 3.erase(beg,end):ɾ��[beg,end)�����Ԫ�أ�������һ��Ԫ�صĵ�����
 4.erase(elem)��ɾ��������ֵΪelem��Ԫ��
*/
void Printset(const set<int>& st)
{
	for (set<int>::const_iterator it = st.begin(); it != st.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> st1;
	st1.insert(30);
	st1.insert(10);
	st1.insert(20);
	st1.insert(40);
	Printset(st1);
	//ɾ����
	st1.erase(st1.begin());
	Printset(st1);
	st1.erase(30);
	Printset(st1);
	//��գ�
	st1.clear();
	//st1.erase(st1.begin(), st1.end());
	Printset(st1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}