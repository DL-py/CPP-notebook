#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���õļ����㷨_set_difference:
1.���ܣ�����������ϵĲ
2.����ԭ�ͣ�
set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
3.ע�⣺
 1.�������ϱ�������������
*/
class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int>vTarget;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vTarget.resize(max(v1.size(),v2.size()));
	cout << "v1��v2�Ĳ��" << endl;
	vector<int>::iterator itEnd =  set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint());
	cout << endl;
	cout << "v2��v1�Ĳ��" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint());
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}