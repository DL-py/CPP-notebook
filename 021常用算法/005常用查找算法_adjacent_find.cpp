#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
���ò����㷨��
1.����ԭ�ͣ�
 1.adjacent_find(iterator beg,iterator end)
 ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õ�����
 
*/
void test01()
{
	vector<int> v;
	for (int i = 1; i < 10; i++)
	{
		v.push_back(i);
		v.push_back(i);
	}
	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ�:" << *it << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}