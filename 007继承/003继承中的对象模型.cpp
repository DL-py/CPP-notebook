#include <iostream>
using namespace std;
/*
�̳��еĶ���ģ�ͣ�
1.���������еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
2.�����е�˽�г�Ա���Ա������������ˣ����ʲ���������ȷʵ���̳���
3.�������ÿ�����Ա��ʾ����(Devoloper command Prompt)�鿴����ģ��
*/
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son : public Base 
{
public:
	int m_D;

};

void test01()
{
	cout << "s1ռ�õ��ڴ��ǣ�" << sizeof(Son) << endl;//16
}

int main()
{
	test01();
	system("pause");
	return 0;
}