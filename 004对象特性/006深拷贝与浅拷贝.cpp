#include<iostream>
using namespace std;
/*
�����ǳ������
1.ǳ�������򵥵Ŀ�����ֵ����
2.������ڶ�����������ռ䣬���п�������
ע�⣺
 1.�������ṩ�Ŀ������캯����ǳ����
 2.���漰�������ڴ�ʱ��ǳ����������������ڴ��ظ��ͷ�����
*/
class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	Person(int age, int height)
	{  
		cout << "�вι��캯���ĵ���" << endl;
		m_Height = new int(height);
		my_age = age;
	}
	Person(const Person& p)
	{
		cout << "�������캯���ĵ���" << endl;
		my_age = p.my_age;
	   //m_Height = p.m_Height;������ĬĬ���ṩ�Ĵ��� 
		m_Height =new int(*p.m_Height);	//�������
	}
	
	~Person()
	{
		cout << "���������ĵ���" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
	}
	int my_age;
	int* m_Height;
};

void test01()
{
	Person p1(18,160);
	cout << "p1��������:" << p1.my_age << "���Ϊ��"<<*p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2��������:" << p2.my_age << "���Ϊ��" << *p2.m_Height << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}