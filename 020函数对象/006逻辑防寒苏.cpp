#include<iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/*
�߼��º�����
1.template<class T> logical_and<T>:�߼���
2.template<class T> logical_or<T>:�߼���
3.template<class T> logical_not<T>:�߼���
*/
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<bool> v2;
	v2.resize(v.size());//����ǰ����ΪĿ���������ٿռ�
	//transform�������㷨
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}