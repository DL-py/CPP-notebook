#include <iostream>
#include <set>
using namespace std;
/*
��С���滻��
1.��С��
 1.empty():�ж������Ƿ�θ��Ū��
 2.size():���������Ĵ�С
3.�滻��
 1.swap(st):����������������
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
	set<int> st2;
	st2.insert(300);
	st2.insert(100);
	st2.insert(200);
	st2.insert(400);
	Printset(st1);
	if (st1.empty())
	{
		cout << "st1Ϊ��" << endl;
	}
	else
	{
		cout << "st1��Ϊ��" << endl;
		cout << "st1�Ĵ�СΪ: " << st1.size() << endl;
	}
	//����������
	cout << "����ǰ��" << endl;
	Printset(st1);
	Printset(st2);

	st1.swap(st2);
	cout << "������ " << endl;
	Printset(st1);
	Printset(st2);

}
int main()
{
	test01();
	system("pause");
	return 0;
}