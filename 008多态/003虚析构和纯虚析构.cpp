#include <iostream>
#include <string>
using namespace std;
/*
虚析构和纯虚析构：
1.使用场景：
多态使用时，如果子类有属性开辟到堆区，那么父类指针在释放时无法调用到子类
的虚构代码。
2.虚析构和纯虚析构的共性：
 1.可以解决父类指针释放子类对象时不干净的问题
 2.都需要有具体的函数实现
3.虚析构和纯虚析构的区别：
 如果是纯虚析构，该类属于抽象类，无法实例化对象
4.虚析构和纯虚析构只能有一个
*/
class Animal
{
public:
	Animal()
	{
		cout << "Amimal构造函数的调用" << endl;

	}
	virtual void speak() = 0;
	//virtual ~Animal()//改为虚析构
 //  //可以解决父类指针释放子类对象时不干净的问题
	//{
	//	cout << "Amimal虚析构函数的调用" << endl;

	//}
	virtual ~Animal() = 0;//纯虚析构
	//有了纯虚析构这个类也成了抽象类，无法实例化对象
	
};
Animal::~Animal()//纯虚析构的实现
{
	cout << "Animal的纯虚析构的调用" << endl;
}

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat的构造函数调用" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name<<"小猫在说话" << endl;
	}
	string* m_Name;
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};
void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父类的指针在析构的时候，不会调用子类中的析构函数，导致子类如果
	//有堆区属性，会出想内存泄漏
	delete animal;
}
int main()
{
	test01();
	system("pause");
	return 0;
}