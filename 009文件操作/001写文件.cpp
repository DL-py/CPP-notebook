#include <iostream>
#include <fstream>//�ļ�����ͷ�ļ�
using namespace std;
/*
д�ļ���
1.���裺
 1.����ͷ�ļ���#include<fstream>
 2.����������ofstream ofs
 3.���ļ���ofs.open("�ļ�·��",�򿪷�ʽ);
 4.д���ݣ�ofs<<"д�������"
 5.�ر��ļ���ofs.close();
2.�򿪷�ʽ��
 1.ios::in    Ϊ���ļ������ļ�
 2.ios::out   Ϊд�ļ������ļ�
 3.ios::binary �����Ʒ�ʽ�����ļ�
 4.ע�⣺
  1.�ļ��Ĵ򿪷�ʽ�������ʹ�ã�����|���ݷ�
  2.�����Զ����Ʒ�ʽд�ļ���ios::binary|ios::out
*/
void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "hello world"<<endl;
	ofs << "What's your name?" << endl;
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}