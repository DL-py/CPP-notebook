#include<iostream>
#include <vector>
using namespace std;
/*
�����ɾ����
1.push_back(ele):β������Ԫ��ele
2.pop_back():ɾ�����һ��Ԫ��
3.insert(const_iterator pos,  ele);������ָ��λ��pos����Ԫ��ele
4.insert(const_iterator pos,int count, ele)������ָ��λ��pos����conunt��Ԫ��ele
5.erase(const_iterator pos):ɾ��������ָ��λ�õ�Ԫ��
6.erase(const_iterator start, const_iterator end)ɾ����������start��end֮���Ԫ��
7.clear():ɾ�����������е�Ԫ��
*/
void Printvector(vector<int> &p)
{
	for (vector<int>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	Printvector(v1);
	v1.pop_back();//βɾ
	Printvector(v1);
	//����:
	v1.insert(v1.begin(),100);
	Printvector(v1);
	v1.insert(v1.begin(),2, 200);
	Printvector(v1);
	//ɾ���������ǵ�����
	v1.erase(v1.begin());
	Printvector(v1);
	//���
	//v1.erase(v1.begin(), v1.end());
	v1.clear();
	Printvector(v1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}