#include <iostream>
#include <deque>
using namespace std;
/*
���캯����

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
	//����1��
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	Printdeque(d1);
	//����2��
	deque<int>d2(d1.begin(), d1.end());
	Printdeque(d2);
	//����3��
	deque<int>d3(10, 100);
	Printdeque(d3);
	//����4��
	deque<int>d4(d3);
	Printdeque(d4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}