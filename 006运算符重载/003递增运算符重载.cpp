#include <iostream>
using namespace std;
/*
�����������++�����أ�
*/
//�Զ�������ͣ�
class MyInteger
{
	friend ostream& operator<< (ostream& cout, MyInteger myint);
public:

	MyInteger()
	{
		m_num = 0;
	}
	//����ǰ��++�����������������Ϊ��һֱ��һ�����ݽ��в���
	MyInteger& operator++()
	{   //�Ƚ���++������
		m_num++;
		//�ٽ�������һ������
		return *this;
	}
	//���غ���++����������ص���ֵ�����ܷ��ؾֲ�����������
	//void operator++(int) int����ռλ��������������ǰ�úͺ��õ���
	MyInteger& operator++(int)
	{
		MyInteger temp;
       //�� ��¼��ʱ�Ľ��
		temp = *this;
	   //�� ����
		m_num++;
		//��� ����¼�������
		return temp;

	}
private:
	int m_num;
};
//���������������
ostream& operator<< (ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}
void test01()
{
	MyInteger myint;

	cout << ++myint << endl;
}
void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}