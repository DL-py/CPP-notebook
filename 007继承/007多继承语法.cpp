#include <iostream>
using namespace std;
/*
��̳��﷨��
1.�̳��﷨�� class ���� :�̳з�ʽ ����1���̳з�ʽ ����2,......
2.ʵ�ʿ��������в�̫����ʹ�ö�̳�
*/
class Base1
{
public:
	Base1()
	{
		m_A = 100;
	}
	int m_A;
};
class Base2
{
public:
	Base2()
	{
		m_A = 200;
	}
	int m_A;
};
class Son : public Base1, public Base2
{
public:
	int m_C;
	int m_D;
};
void test01()
{
	Son s;
	cout << "size of Son = " << sizeof(Son) << endl;
	//�������г�����ͬ���ĳ�Ա����Ҫ������������
	cout << "Base1::m_A = " << s.Base1::m_A << endl;
	cout << "Base2::m_A = " << s.Base2::m_A << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}