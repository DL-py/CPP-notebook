#include <iostream>
#include <fstream>//文件操作头文件
using namespace std;
/*
写文件：
1.步骤：
 1.包含头文件：#include<fstream>
 2.创建流对象：ofstream ofs
 3.打开文件：ofs.open("文件路径",打开方式);
 4.写数据：ofs<<"写入的数据"
 5.关闭文件：ofs.close();
2.打开方式：
 1.ios::in    为读文件而打开文件
 2.ios::out   为写文件而打开文件
 3.ios::binary 二进制方式操作文件
 4.注意：
  1.文件的打开方式可以配合使用，利用|操纵符
  2.例：以二进制方式写文件：ios::binary|ios::out
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