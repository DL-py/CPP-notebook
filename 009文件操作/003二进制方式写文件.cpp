#include<iostream>
#include<fstream>
using namespace std;
/*
二进制方式写文件：
1.打开方式要指定为：ios::binary

*/
class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	ofstream ofs("Person.txt", ios::out | ios::binary);
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}