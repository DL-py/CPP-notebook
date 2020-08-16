#include <iostream>
using namespace std;
/*
ͬ����̬��Ա�Ĵ���
1.��Ǿ�̬��Ա����ʽһ�£�
 1.��������ͬ����Ա��ֱ�ӷ��ʼ���
 2.���ʸ���ͬ����Ա����Ҫ��������

*/
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base->func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base->func()" << endl;
	}
};
int Base::m_A = 100;
class Son : public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son->func()" << endl;
	}
};
int Son::m_A = 200;
//ͬ����̬��Ա���ԣ�
void test01()
{
	Son s;
	//1.ͨ��������ʾ�̬��Ա���ԣ�
	cout << "Son �� m_A:" << s.m_A << endl;
	cout << "Base �� m_A:" << s.Base::m_A << endl;
	//2.ͨ������ʾ�̬��Ա���ԣ�
	cout << "Son �� m_A:" << Son::m_A << endl;
	cout << "Base �� m_A:" << Son::Base::m_A << endl;
}
//ͬ����̬��Ա������
void test02()
{
	Son s;
	//ͨ��������þ�̬��Ա������
	s.func();
	s.Base::func();
	//ͨ���������þ�̬��Ա������
	Son::func();
	Son::Base::func();
	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ص�
	//���������ͬ����Ա����
	Son::Base::func(100);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}