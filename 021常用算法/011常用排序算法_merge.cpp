#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���������㷨_merge:
1.������������������Ԫ�غϲ��������浽��һ��������
2.����ԭ�ͣ�
 1.merge(iterator beg1, iterator end1, iterator beg2,iterator end2,iterator dest)
 beg1:����1��ʼ������
 end1:����1����������
 beg2:����2��ʼ������
 end2:����2����������
 dest:Ŀ��������ʼ������
 */
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i+1);
	}
	//��ǰΪĿ�����������ڴ棺
	v3.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}