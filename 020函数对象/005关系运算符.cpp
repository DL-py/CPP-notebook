#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
/*
��ϵ�������
1.template<class T> bool equal_to<T>:����
2.template<class T> bool not_equal<T>:������
3.template<class T> bool greater<T>:����
4.template<class T> bool greater_equal<T>:���ڵ���
5.template<class T> bool less<T>:С��
6.template<class T> bool less_equal<T>:С�ڵ���
*/
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	    cout << endl;
		//�������У�
		//greater<int>()���ڽ��ĺ�������
		sort(v.begin(), v.end(), greater<int>());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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