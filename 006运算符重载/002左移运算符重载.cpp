#include <iostream>
using namespace std;
/*
������������أ�����Զ������������
1.����������������������
2.���ط�ʽ��
 1.��Ա����
 2.ȫ�ֺ���
3.ע�⣺
�����Զ������͵����ݲŻ�ʹ����������������أ������������Ͳ���
*/
class Person
{
friend ostream& operator<<(ostream& cout, Person& p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:
	int m_A;
	int m_B;
	//���ó�Ա�����������������:p.operator(cout),�򻯰汾p<<cout
	//�������ó�Ա��������������������޷�ʵ��cout�����
	//void operator<<(cout)
	//{


	//}
};
//����ȫ�ֺ������������������ostream ����������࣬����ֻ����һ��
ostream& operator<<(ostream &cout, Person &p)//��ʽ���˼��
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
	return cout;
}

//��Ϊ�Ǵ������ã����þ������������˴���Ŀ��Բ���cout��������������
//ostream& operator<<(ostream& out, Person& p)
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return out;
//
//}

void test01()
{
	Person p(10,10);
	cout << p << " hello world"<<endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}