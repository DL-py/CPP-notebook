#include <iostream>
#include <set>
using namespace std;
/*
����͸�ֵ������
1.���죺
 1.set<T> st:Ĭ�Ϲ��캯��
 2.set<T> st2(st1):�������캯��
2.��ֵ
set& operator=(const set &st):���صȺ������
3.��������
insert(elem)
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
	st1.insert(30);
	st1.insert(40);
	st1.insert(10);
	st1.insert(20);
	Printset(st1);
	//�������죺
	set<int> st2(st1);
	Printset(st2);
	//��ֵ������
	set<int> st3;
	st3 = st2;
	Printset(st3);


}
int main()
{
	test01();
	system("pause");
	return 0;
}