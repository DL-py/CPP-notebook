#include<iostream>
using namespace std;
/*
const���γ�Ա������
1.const���εĳ�Ա����-������
2.�������ڲ������޸ĳ�Ա����
3.��Ա��������ʱ�ӹؼ���mutable,�ڳ���������Ȼ�����޸�
4.������
 1.��������ǰ��const�Ƹö���Ϊ������
 2.������ֻ�ܵ��ó�����
*/
class person
{
public:
   //thisָ��ı��� ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	//const person * const this;  personǰ��const�ȼ��ں��������const
	//�ڳ�Ա�������const���ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
	void showperson() const 
	{
		 this->m_B = 100;
		//this->m_A = 100;
	}

	int m_A;
	mutable int m_B;//�����������ʹ�ڳ�������Ҳ�����޸����������ֵ���Ϲؼ���mutable
};
//������
void test01()
{
	person p;
	p.showperson();
}
//������
void test02()
{
  const person p; 
  p.m_B = 100;//m_B������ı����ڳ�������Ҳ�����޸�
  //������ֻ�ܵ��ó�����
  p.showperson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}