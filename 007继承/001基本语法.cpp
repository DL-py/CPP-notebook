#include <iostream>
using namespace std;
/*
�����﷨��
1.�̳еĻ���������class ���� : �̳з�ʽ ����
2.����Ҳ��������
3.����Ҳ�л���
*/
class BasePage//����ҳ�����
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��......(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ���������......�������ײ���" << endl;
	}
	void left()
	{
		cout << "C++��python��Java......�����������б�" << endl;
	}
};
//Javaҳ�棺
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
int main()
{
	Java java;
	java.content();
	java.footer();
	java.header();
	java.left();
	system("pause");
	return 0;
}