#include <iostream>
using namespace std;
/*
继承中的对象模型：
1.父类中所有的非静态成员属性都会被子类继承下去
2.父类中的私有成员属性被编译器隐藏了，访问不到，但是确实被继承了
3.可以利用开发人员提示工具(Devoloper command Prompt)查看对象模型
*/
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son : public Base 
{
public:
	int m_D;

};

void test01()
{
	cout << "s1占用的内存是：" << sizeof(Son) << endl;//16
}

int main()
{
	test01();
	system("pause");
	return 0;
}