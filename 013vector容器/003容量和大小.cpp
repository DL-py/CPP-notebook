#include<iostream>
#include <vector>
using namespace std;
/*
�����ʹ�С��
1.����:
 1.empty():�ж������Ƿ�Ϊ��
 2.capacity():����������
 3.
2.��С:
 1.size():����������Ԫ�صĸ���
 2.resize(int num)������ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ��
                    ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
 3.resize(int num,ele):����ָ�������ĳ���Ϊnum,�������䳤������ele�����λ��
                    ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
*/
void Printvector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	    cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	Printvector(v1);
	if (v1.empty())//Ϊ�����v1Ϊ��
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������: " << v1.capacity() << endl;
		cout << "v1�Ĵ�С: " << v1.size() << endl;//��С��Ԫ�صĸ���
	}
	//����ָ����С��
	v1.resize(15);
	Printvector(v1);
	v1.resize(20, 10);
	Printvector(v1);
	v1.resize(5);
	Printvector(v1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}