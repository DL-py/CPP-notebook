#include<iostream>
using namespace std;
/*
�����������ͷŶ���ʱ������������
1.���������޷���ֵ�������Է�������
2.����������ǰ���Զ��ĵ�����������������ֻ�����һ��
3.���������Զ��ṩ��ʵ�ֵ���������
*/

class person
{
public:
	~person()
	{
		cout << "���������ĵ���" << endl;

	}


};
void test0()
{
	person p1;
}
int main()
{
	test0();
	system("pause");
	return 0;
}