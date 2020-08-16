#include<iostream>
#include<fstream>
#include <string>
using namespace std;
/*
读文件：

*/
void test01()
{
	ifstream ifs;//创建流对象
	ifs.open("test.txt", ios::in);//打开文件
	if (!ifs.is_open())//判断文件是否打开成功
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//读文件：方法1
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}
	//读文件：方法2
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}
	ifs.close();*/
	//读文件：方法3
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}
	//读文件：方法4
	//char c;
	//while ((c = ifs.get()) != EOF)//EOF表示文件尾 
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