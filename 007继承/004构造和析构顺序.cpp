#include <iostream>
using namespace std;
/*
构造和析构顺序：
1.当子类继承父类后，创建子类对象也会调用父类的构造函数
2.构造函数：先调用父类的构造函数，再调用子类的构造函数
3.析构函数：先调用子类的析构函数，再调用父类的析构函数
*/
class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}

	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};

class Son : public Base 
{
public:
	 Son()
	 {
		cout << "Son的构造函数" << endl;
	 }

	 ~Son()
	 {
		cout << "Son的析构函数" << endl;
	 }
};

void test01()
{
	//Base b;
	Son s;
}
int main()
{
	test01();
	system("pause");
	return 0;
}