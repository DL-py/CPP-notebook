#include <iostream>
using namespace std;
/*
�Ӻ���������أ�
1.�﷨��operator+��Ϊ������������ȫ�ֺ������Ա�����������ء�
2.���ط�����
 1.���ó�Ա������������
 2.����ȫ�ֺ�����������
*/


class Person
{
public:

	int m_A;
	int m_B;
	//���ó�Ա�������ؼӺţ�
	//Person operator+(Person& a)
	//{
	//	Person tempt;
	//	tempt.m_A = this->m_A + a.m_A;
	//	tempt.m_B = this->m_B + a.m_B;
	//	return tempt;
	//}
};
//����ȫ�ֺ������мӺ�����
Person operator+(Person& a, Person& b)
{
	Person tempt;
	tempt.m_A = a.m_A + b.m_A;
	tempt.m_B = a.m_B + b.m_B;
	return tempt;
}

void test01()
{
	Person a;
	Person b;
	a.m_A = 10;
	a.m_B = 10;
	b.m_A = 10;
	b.m_B = 10;
	Person c = a + b;
	cout << "the value of m_A of c" << c.m_A << endl;
	cout << "the value of m_B of c" << c.m_B << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}




