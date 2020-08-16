#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���ü����㷨_set_intersection:
1.�������������������ϵĽ���
2.����ԭ�ͣ�
set_insection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)
ע�⣺
1.Դ�������������������
2.Ŀ�����������ڴ�ҪΪ����������ȡ��Сֵ
3.set_intersection����ֵ���ǽ��������һ��Ԫ�ص�λ��
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
	vector<int>vtarget;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}
	vtarget.resize(min(v1.size(), v2.size()));
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), itEnd, Myprint());
	cout << endl;
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}