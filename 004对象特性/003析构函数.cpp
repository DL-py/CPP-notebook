#include<iostream>
using namespace std;
/*
析构函数：释放对象时，进行清理工作
1.析构函数无返回值，不可以发生重载
2.对象在销毁前会自动的调用析构函数，而且只会调用一次
3.编译器会自动提供空实现的析构函数
*/

class person
{
public:
	~person()
	{
		cout << "析构函数的调用" << endl;

	}


};
void test0()
{
	person p1;
}
int main()
{
	test0();
	system("pause");
	return 0;
}