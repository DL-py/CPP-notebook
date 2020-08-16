#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���õļ����㷨_set_union:
1.���ܣ����������ϵĲ���
2.����ԭ�ͣ�
set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
3.ע�⣺
1.�󲢼����������ϱ�������������
2.Ŀ���������ٿռ�ʱ��Ҫ����������sizeֵ���
3.set_union���ص��ǲ��������һ��Ԫ�ص�λ��
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
	vector<int>v1;
	vector<int>v2;
	vector<int>vTarget;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vTarget.resize(v1.size() + v2.size());//����Ŀ�������ռ�
	vector<int>::iterator itEnd= set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}
