#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
using namespace std;
/*
���õ����������㷨_fill:
1.���������������������ָ����Ԫ��
2.����ԭ�ͣ�fill(iterator beg,iterator end, value)

*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v;
	v.resize(10);
	//�������
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), Myprint);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
