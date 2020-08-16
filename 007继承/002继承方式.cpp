#include <iostream>
using namespace std;
/*
继承方式：
1.公共继承：父类中的公共权限和保护权限到子类不变
2.保护继承：父类中的公共权限和保护权限到子类变为保护权限
3.私有继承：父类中的公共权限和保护权限到子类变为私有权限
注意：
1.三种继承方式都无法访问父类的私有内容

*/
class Base//父类
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
//公共继承
class son1 :public Base
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员，到子类依然是公共权限
		m_B = 10;//父类中的保护权限内容，到子类依然是保护权限
		//m_C = 10;//父类中的私有权限内容，子类无法访问
	}
};
//保护继承
class son2 : protected Base
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员，到子类依然是保护权限
		m_B = 10;//父类中的保护权限内容，到子类依然是保护权限
		//m_C = 10;//父类中的私有权限内容，子类无法访问
	}
};
//私有继承：
class son3 : private Base
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员，到子类依然是私有权限
		m_B = 10;//父类中的保护权限内容，到子类依然是私有权限
		//m_C = 10;//父类中的私有权限内容，子类无法访问
	}
};
class gradson3 : public son3
{
public:
	void func()
	{
		//m_A = 10;父类的私有成员，子类无法访问
		//m_B = 10;父类的私有成员，子类无法访问
	}
};
void test01()
{
	son1 s1;
	s1.m_A = 15;
	//s1.m_B = 100; //继承后为保护权限无法访问
}
void test02()
{
	son2 s2;
//	s2.m_A = 15;//继承后为保护权限无法访问
//  s2.m_B = 100;//继承后为保护权限无法访问
}

void test03()
{
	son3 s3;
//	s2.m_A = 15;//继承后为私有权限无法访问
//  s2.m_B = 100;//继承后为私有权限无法访问
}
int main()
{

	system("pause");
	return 0;
}