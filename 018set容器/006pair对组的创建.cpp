#include <iostream>
#include <set>
using namespace std;
/*
pair����Ĵ�����
 1.pair<type, type> p(value1,value2)
 2.pair<type, type> p = make_pair(value1,value2)
*/
void test01()
{
	//��һ�ַ�����
	pair<string, int> p("Tom", 20);
	cout << "����: "<<p.first << endl;
	cout << "����: " << p.second << endl;

	//�ڶ��ַ�����
	pair<string, int> pa = make_pair("Tom", 20);
	cout << "����: " << pa.first << endl;
	cout << "����: " << pa.second << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}