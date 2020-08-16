#include<iostream>
#include <deque>
using namespace std;
/*
��ֵ������
1.deque& operator=(const deque &deq)//���صȺ������
2.assign(beg,end)//��[beg,end)�е����ݿ�����ֵ������
3.assign(n,elem)//��n��elem������ֵ������
�ܽ᣺deque�ĸ�ֵ������vector��������
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
	deque<int> d2;
	d2 = d1;
	Printdeque(d2);
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	Printdeque(d3);
	deque<int> d4;
	d4.assign(10, 100);
	Printdeque(d4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}