#include<iostream>
#include <deque>
using namespace std;
/*
���ݴ�ȡ��
1.at(int idx):��������idx��ָ������
2.operator[]:��������idx��ָ������
3.front():���������е�һ������
4.back():�������������һ������
*/
void test01()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);
	d1.push_back(50);
	d1.push_back(60);
	//����[]���ʣ�
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;
	cout << "��һ��Ԫ��Ϊ��" << d1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << d1.back() << endl;
	 
}
int main()
{
	test01();
	system("pause");
	return 0;
}