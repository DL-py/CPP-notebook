#include<iostream>
#include<fstream>
#include <string>
using namespace std;
/*
���ļ���

*/
void test01()
{
	ifstream ifs;//����������
	ifs.open("test.txt", ios::in);//���ļ�
	if (!ifs.is_open())//�ж��ļ��Ƿ�򿪳ɹ�
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//���ļ�������1
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	//���ļ�������2
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}
	ifs.close();*/
	//���ļ�������3
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	//���ļ�������4
	//char c;
	//while ((c = ifs.get()) != EOF)//EOF��ʾ�ļ�β 
	//{
	//	cout << c;
	//}
}
int main()
{
	test01();
	system("pause");
	return 0;
}