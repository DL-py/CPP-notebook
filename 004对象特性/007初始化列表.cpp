#include<iostream>
using namespace std;
/*
初始化列表：
1.功能：对类中属性进行初始化
2.语法：构造函数():属性1(值1)，属性2(值2),...
3.注意：
 1.初始化列表是替代有参构造函数中的属性赋值语句，是代码更简洁
*/

class person
{
public:
	
	person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)//初始化列表
	{
			cout << "m_A=" << m_A << endl;
			cout << "m_B=" << m_B << endl;
			cout << "m_C=" << m_C << endl;
	}
	int m_A;
	int m_B;
	int m_C;
};
void test01()
{
	person p1(1, 2, 3);

}


int main()
{
	test01();
	system("pause");
	return 0;
}