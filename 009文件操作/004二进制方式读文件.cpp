#include<iostream>
#include <fstream>
using namespace std;
/*
二进制方式读文件：

*/
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	ifstream ifs;
	ifs.open("Person.txt", ios::out | ios::binary);
	if (!ifs.is_open())
	{
		cout << "读取文件失败" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_Age << endl;
	cout << p.m_Name << endl;
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}