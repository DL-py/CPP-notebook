#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
���������㷨_sort:
1.���ܣ��������ڵ�Ԫ�ؾ�������
2.����ԭ�ͣ�
 1.sort(iterator beg, iterator end,_pred)
*/
void Myprint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);
	sort(v.begin(), v.end());//Ԫ�ذ�����������
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
	//�ı�Ϊ��������
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
