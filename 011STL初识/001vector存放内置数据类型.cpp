#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
/*
vector��������������ͣ�

*/
void Myprint(int val)
{
	cout << val << endl;
}
void test01()
{
	vector<int> v;//������һ��vector����

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin();//v.begin()��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��λ��
	//��һ�ֱ�����ʽ��while
	/*while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}*/
	//�ڶ��ֱ���������forѭ��
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}
	//�����ֱ�����ʽ������STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), Myprint);

}
int main()
{
	test01();
	system("pause");
	return 0;
}