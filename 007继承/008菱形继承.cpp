#include <iostream>
using namespace std;
/*
���μ̳У�����������̳���ͬһ�����࣬����ĳ����ͬʱ�̳���������������
1.���μ̳�ʱ����������ӵ����ͬ���ݣ���Ҫ���������������
2.���μ̳д���������:���μ̳е������������ݣ��˷���Դ
3.�����������̳У��̳з�ʽǰ����ؼ���virtual
*/
class Animal//������:�����
{
public:
	int m_Age;
};
class Sheep :virtual public Animal //����
{

};
class Camel :virtual public Animal//����
{

};
class Alpaca : public Sheep, public Camel//������
{

};
void test01()
{
	Alpaca al;
	al.Sheep::m_Age = 18;
	al.Camel::m_Age = 28;
	al.m_Age = 20;
	cout << "al.Sheep::m_Age="<<al.Sheep::m_Age << endl;
	cout << "al.Camel::m_Age="<<al.Camel::m_Age << endl;
	cout << "al.m_Age=" << al.m_Age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}