#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���ÿ������滻�㷨_copy:
1.���ܣ���������ָ����Χ��Ԫ�ؿ�������һ������
*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;//��ǰΪĿ���������ٿռ�
	v2.resize(v.size());
	copy(v.begin(), v.end(), v2.begin());
	for_each(v2.begin(), v2.end(), Myprint);
}
int main()
{
	test01();
	system("pause");
	return 0;
}