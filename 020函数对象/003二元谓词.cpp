#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
��Ԫν�ʣ� 

*/
class Mycompare
{
public:
	bool operator()(int val1,int val2)
	{
		return val1 > val2;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	cout << "��С��������" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	    cout << endl;
		cout << "�Ӵ�С����" << endl;
   //ʹ�ú������󣬸ı��㷨���ԣ��������Ϊ�Ӵ�С
	sort(v.begin(), v.end(), Mycompare());
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
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