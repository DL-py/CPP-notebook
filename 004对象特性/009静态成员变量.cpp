#include<iostream>
using namespace std;
/*
��̬��Ա������
1.�ص㣺
 1.���ж�����ͬһ������
 2.�ڱ���׶η����ڴ�
 3.���������������ʼ��(����Ҫ��)
 4.��̬��Ա����Ҳ�Ǿ��з���Ȩ�޵ģ���˽�о�̬��Ա���������ڲ��ܷ���
2.�﷨��
static
3.���ʷ�ʽ��
 ��̬��Ա�����������κ�һ���������ж�����ͬһ������
 1.ͨ��������з���
 2.ͨ���������з���
*/
class Person
{
public:

	static int m_A;//��������
};
int Person:: m_A = 100;//�����ʼ��

void test01()//����ͬһ������
{
	Person p1;
	cout << p1.m_A << endl;

	Person p2;
	p2.m_A = 200;
	cout << p1.m_A << endl; 
	
}
void test02()//���ʾ�̬��Ա�����ķ�ʽ
{
	Person p1;
	cout << Person::m_A << endl;
	cout << p1.m_A << endl;
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}