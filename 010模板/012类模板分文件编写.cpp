#include <iostream>
using namespace std;
//#include "Person.cpp"//ֱ�Ӱ���.cppԴ�ļ�
#include "Person.hpp"//.c��.cppд��һ��дΪ.hpp������
/*
��ģ����ļ���д��
1.���ܲ���������:��ģ��Ĵ���ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���ò���
2.���������
 1.ֱ�Ӱ���.cppԴ�ļ�
 2.������.h��ʵ��.cppд��ͬһ���ļ��У������ĺ�׺Ϊ.hpp,.hpp��Լ�����ƣ�������ǿ��
�����Ľ�������ǵڶ��ַ���
 */
void test01()
{
	Person <string, int>p1("Jerry", 18);
	p1.showPerson();//ֱ�Ӱ���.cppԴ�ļ�
}
int main()
{
	test01();
	system("pause");
	return 0;
}