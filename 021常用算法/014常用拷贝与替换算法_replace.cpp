#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���ÿ������滻�㷨_replace:
1.���ܣ���������ָ����Χ�ڵľ�Ԫ���滻Ϊ��Ԫ��
2.����ԭ�ͣ�replace(iterator beg, iterator end, oldvalue, newvalue)

*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(20);
	v.push_back(30);
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
	cout << "�滻�� " << endl;//���е�20�����滻Ϊ2000
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), Myprint);

}
int main()
{
	test01();
	system("pause");
	return 0;
}