#include <iostream>
#include <vector>
using namespace std;
/*
Ԥ���ռ䣺����vector�ڶ�̬��չ����ʱ����չ����
reserve(int len);����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز����Է���

*/
void test01()
{
	vector<int> v;
	int* p = NULL;
	int num = 0;
	//����reserveԤ���ռ�
	v.reserve(100000);
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "�����ڴ�Ĵ����� " << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}