#include<iostream>
#include <string.h>
using namespace std;
/*
�� = ��Ա���ԣ���Ա������ + ��Ա��������Ա������
//����Ȩ�ޣ�
public        ����Ȩ��      ���ڿ��Է��ʣ�����Ҳ�ܷ���
protected     ����Ȩ��      ���ڿ��Է��ʣ����ⲻ�ܷ���   ������Է���
private       ˽��Ȩ��      ���ڿ��Է��ʣ����ⲻ�ܷ���   ���಻�ܷ���
*/


class person
{
public:
	//һ��ͨ���������������ʺ��޸�˽������
	void Set_name(string name)
	{
		m_name = name;
	}
	string get_name()
	{
	  return m_name;
	}
 private:
	 string  m_name;
};

class Student
{
  public:
	  string name;//����Ȩ��
	  int  m_id;
  protected:
	  string  car;
  private:
	 int m_password;
public: 
	void func()
	{
		name = "����";
		car = "������";
		m_password = 12345;
	}
	  void Set_name(string i)
	  {
		  name = i;
	  }

	  void Show_name()
	  {
		  cout << "ѧ������:" << name <<"ѧ�ţ�"<<m_id<<endl;
	  }
};

int main()
{
	person  P1;//����һ������ʵ����һ������
	Student  S1;
	P1.Set_name("����");
    cout<<P1.get_name()<< endl;
	S1.Set_name("����");
	S1.m_id = 1;
	S1.Show_name();
	system("pause");
	return 0;
}