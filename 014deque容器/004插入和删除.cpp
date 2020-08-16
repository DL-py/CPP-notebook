#include<iostream>
#include<deque>
using namespace std;
/*
�����ɾ����
1.���˲��������
 1.push_back(elem):������β�����һ������
 2.push_front(elem):������ͷ�����һ������
 3.pop_back():ɾ���������һ������
 4.pop_front():ɾ��������һ������
2.ָ��λ�ò�����
 1.insert(pos, elem):��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
 2.insert(pos,n,elem):��posλ�ò���n��elem���ݣ��޷���ֵ
 3.insert(pos,beg,end):��posλ�ò���[beg,end)��������ݣ��޷���ֵ
 4.clear():�����������������
 5.erase(beg,end):ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��
 6.erase(pos):ɾ��posλ�����ݣ�������һ�����ݵ�λ��
*/
void Printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int> d1;
	//β�壺
	d1.push_back(10);
	d1.push_back(20);
	//ͷ�壺
	d1.push_front(100);
	d1.push_front(200);
	Printdeque(d1);
	//βɾ��
	d1.pop_back();
	Printdeque(d1);
	//ͷɾ��
	d1.pop_front();
	Printdeque(d1);
}
void test02()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	Printdeque(d1);
	d1.insert(d1.begin(), 1000);
	Printdeque(d1);
	d1.insert(d1.begin(), 2, 10000);
	Printdeque(d1);
	deque<int> d2;
	d2.insert(d2.begin(), d1.begin(), d1.end());
	Printdeque(d2);
}
void test03()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	Printdeque(d1);
	deque<int>::iterator it = d1.begin();
	it++;

	d1.erase(it);
	Printdeque(d1);

	//������ɾ����
	//d1.erase(d1.begin(),d1.end());

	//��գ�
	d1.clear();
	Printdeque(d1);


}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}