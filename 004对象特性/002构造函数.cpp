#include<iostream>
using namespace std;
/*���캯��:���г�ʼ������
1.���ࣺ��ͨ���캯�����������캯��
2.������ʽ����������Ϊ���������޺�������,�޷���ֵ��
3.���캯�����Է�������
4.���󴴽�ʱ���Զ�������ֻ������һ��
5.���������Զ��ṩ��ʵ�ֵĹ��캯��
*/

class person
{
public:
	person()
	{
		cout << "person�Ĺ��캯���ĵ���" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person(int a)�Ĺ��캯���ĵ���" << endl;
	}
	//�������캯��
	person(const person& p)
	{
	
		age = p.age;
	}
	~person()
	{
		cout << "person�����������ĵ���" << endl;
	}
	int age;

};

void test1()
{
//����
//���ŷ�
	person P;
	person p1();

//��ʾ��
//��ʽת����

}
int main()
{

	system("pause");
	return 0;
}