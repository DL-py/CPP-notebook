#include<iostream>
using namespace std;
/*
��̬��Ա������
��̬��Ա�������ص㣺
1.���ж�����ͬһ������
2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
3.��̬��Ա����ͬ�����з���Ȩ�ޣ�
������̬��Ա����Ϊ˽��ʱ�������ǲ��ܽ��з��ʵ�
��̬��Ա�����ķ��ʷ�����
1.ͨ��������з���
2.ͨ������з���
*/
class person
{
public:
	static void func() 
	{
		m_A = 0; 
	cout << "static void func�����ĵ���" << endl;
	}
	static int m_A;
};
int person::m_A = 100;

void test01()
{
	person p;
	p.func();
	person::func();
}
int main()
{
	test01();


	system("pause");
	return 0;
}