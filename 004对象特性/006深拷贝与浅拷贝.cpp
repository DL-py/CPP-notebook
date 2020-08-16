#include<iostream>
using namespace std;
/*
深拷贝与浅拷贝：
1.浅拷贝：简单的拷贝赋值操作
2.深拷贝：在堆区重新申请空间，进行拷贝操作
注意：
 1.编译器提供的拷贝构造函数是浅拷贝
 2.当涉及到堆区内存时，浅拷贝会产生堆区的内存重复释放问题
*/
class Person
{
public:
	Person()
	{
		cout << "默认构造函数的调用" << endl;
	}
	Person(int age, int height)
	{  
		cout << "有参构造函数的调用" << endl;
		m_Height = new int(height);
		my_age = age;
	}
	Person(const Person& p)
	{
		cout << "拷贝构造函数的调用" << endl;
		my_age = p.my_age;
	   //m_Height = p.m_Height;编译器默默认提供的代码 
		m_Height =new int(*p.m_Height);	//深拷贝操作
	}
	
	~Person()
	{
		cout << "析构函数的调用" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
	}
	int my_age;
	int* m_Height;
};

void test01()
{
	Person p1(18,160);
	cout << "p1的年龄是:" << p1.my_age << "身高为："<<*p1.m_Height<<endl;
	Person p2(p1);
	cout << "p2的年龄是:" << p2.my_age << "身高为：" << *p2.m_Height << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}