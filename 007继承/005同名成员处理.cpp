#include <iostream>
using namespace std;
/*
ͬ����Ա�Ĵ���
1.���ʷ�ʽ��
 1.���������ͬ����Ա��ֱ�ӷ��ʼ���
 2.���ʸ����ͬ����Ա����Ҫ��������

*/
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	int m_A;
	void func()
	{
		cout << "Base->func�����ĵ���" << endl;
	}
	void func(int a)
	{
		cout << "Base->func(int a)�����ĵ���" << endl;
	}
};
class Son : public Base
{
public:
	int m_A;
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son->func�����ĵ���" << endl;
	}

};
void test01()//ͬ���ĳ�Ա����
{
	Son s;
	cout << "Son��m_A="<<s.m_A << endl;
	cout << "Base��m_A=" << s.Base::m_A << endl;//��Ҫ��������
}
void test02()//ͬ���ĳ�Ա����
{
	Son s;
	s.func();//��������ĳ�Ա����
	s.Base::func();//�������������ø����Ա����
	//s.func(100);
	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա���������ص�
	//���������ͬ����Ա����
	s.Base::func(100);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}