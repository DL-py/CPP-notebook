#include<iostream>
using namespace std;
#include <vector>
/*
���ݴ�ȡ��
1.at(int idx):��������idx��ָ������
2.operator[inx]:��������idx��ָ������
3.front():���������е�һ��Ԫ��
4.back():�������������һ������Ԫ��
*/

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//����[]��ʽ����Ԫ��
	for (int i = 0; i < v1.size(); i++)
	{
		cout<<v1[i]<<" ";
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;
	cout << "v1�ĵ�һ��Ԫ��Ϊ��" << v1.front() << endl;
	cout << "v1�����һ��Ԫ��Ϊ��" << v1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}