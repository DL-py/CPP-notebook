#include<iostream>
using namespace std;
/*
��ʼ���б�
1.���ܣ����������Խ��г�ʼ��
2.�﷨�����캯��():����1(ֵ1)������2(ֵ2),...
3.ע�⣺
 1.��ʼ���б�������вι��캯���е����Ը�ֵ��䣬�Ǵ�������
*/

class person
{
public:
	
	person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)//��ʼ���б�
	{
			cout << "m_A=" << m_A << endl;
			cout << "m_B=" << m_B << endl;
			cout << "m_C=" << m_C << endl;
	}
	int m_A;
	int m_B;
	int m_C;
};
void test01()
{
	person p1(1, 2, 3);

}


int main()
{
	test01();
	system("pause");
	return 0;
}