#include<iostream>
using namespace std;
/*
类模板对象做函数参数：
1.传入方式：
 1.指定传入的类型：直接显示对象的数据类型
 2.参数模块化：将对象中的参数变为模块传参
 3.整个类模板化：将这个对象模板化进行传参
2.总结：
 平常指定传入的类型应用比较常见
*/
template <class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}
	T1 m_Name;
	T2 m_Age;
	void showPerson()
	{
		cout << "姓名：" << m_Name << "年龄：" <<m_Age<< endl;
	}
};
void printPerson1(Person<string, int>& p)//指定传入类型
{
	p.showPerson();
}
void test01()
{
	Person<string, int> p1("孙悟空", 999);
	printPerson1(p1);
}
template <class T1, class T2>
void printPerson2(Person< T1, T2> &p)//参数模块化
{
	p.showPerson();
	//查看T1和T2的类型：
	cout << "T1的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int> p1("猪八戒", 990);
	printPerson2(p1);
}

template <class T>
void printPerson3(T &p)//整个类模板化
{
	p.showPerson();
	cout << "T的数据类型为：" << typeid(T).name() << endl;
}
void test03()
{
	Person <string, int> p3("唐僧", 30);
	printPerson3(p3);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}