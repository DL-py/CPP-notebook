#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
���ò����㷨_binary_search:
1.��������������ָ��Ԫ���Ƿ����
2.����ԭ�ͣ�
 1.bool binary_search(iterator beg,iterator end,val)
 �鵽����true,���򷵻�false
 ע�⣺����������������������
 */
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	bool flag = binary_search(v.begin(), v.end(), 9);
	if (flag == true)
	{
		cout << "�ҵ���" << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}