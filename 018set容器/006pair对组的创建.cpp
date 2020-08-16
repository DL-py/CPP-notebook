#include <iostream>
#include <set>
using namespace std;
/*
pair对组的创建：
 1.pair<type, type> p(value1,value2)
 2.pair<type, type> p = make_pair(value1,value2)
*/
void test01()
{
	//第一种方法：
	pair<string, int> p("Tom", 20);
	cout << "姓名: "<<p.first << endl;
	cout << "年龄: " << p.second << endl;

	//第二种方法：
	pair<string, int> pa = make_pair("Tom", 20);
	cout << "姓名: " << pa.first << endl;
	cout << "年龄: " << pa.second << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}