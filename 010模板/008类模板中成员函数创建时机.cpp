#include <iostream>
using namespace std;
/*
��ģ���г�Ա�����Ĵ���ʱ����
1.ģ�������г�Ա��������ͨ���г�Ա��������ʱ����������ģ�
 1.��ͨ���еĳ�Ա����һ��ʼ�Ϳ��Դ���
 2.��ģ���еĳ�Ա�����ڵ���ʱ�Ŵ���
*/
class Person1
{
public:
	void showPerson1()
	{
		cout << "showPerson1()" << endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout << "showPerson2()" << endl;
	}
};
template <class T>
class Myclass
{
public:
	T obj;
	//��ģ���Ա����
	void func1()
	{
		obj.showPerson1();
	}
	void func2() 
	{
		obj.showPerson2();
	}
};
void test01()
{
	Myclass <Person1> p;
	p.func1();//��ģ��ĳ�Ա����ֻ�е���ʱ�Żᱻ����
	//p.func2();
}
int main()
{
	test01();
	system("pause");
	return 0;
}