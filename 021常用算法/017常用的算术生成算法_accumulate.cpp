#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
/*
���õ����������㷨_accumulate:
1.��������:��������������Ԫ�ص��ۻ���
2.����ԭ�ͣ�accumulate(iterator beg,iterator end,value)
 value:��ʼ���ۼ�ֵ
*/
void test01()
{
	vector<int> v;
	for (int i = 0; i <= 100; i++)
	{
		v.push_back(i);
	}
	int total = accumulate(v.begin(), v.end(), 0);
	cout << "�ۼ�ֵΪ�� " << total << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}