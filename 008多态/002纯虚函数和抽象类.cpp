#include <iostream>
using namespace std;
/*
1.���麯����
�ڶ�̬�У�ͨ��������麯����ʵ����������ģ���Ҫ���ǵ���������д������
��˿��Խ��麯����Ϊ���麯��
2.�﷨��
virtual ����ֵ���� �������������б�=0
���������˴��麯���������Ҳ��Ϊ������
3.��������ص㣺
 1.�޷�ʵ��������
 2.���������д�������еĴ��麯��������Ҳ���ڳ�����
*/
class Base
{
public:
	virtual void func() = 0;//����ֻҪ��һ�����麯�������ǳ�����
};
class Son : public Base
{
public:
	virtual void func()
	{
		cout << "������д�˸���Ĵ��麯��" << endl;
	}

};
void test01()
{
	//Base b; �������޷�ʵ��������
	//new Base; �������޷�ʵ��������
	//Son s;����û����д����Ĵ��麯����Ҳ��һ��������
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	system("pause");
	return 0;
}