#include<iostream>
using namespace std;
/*
空指针访问成员函数：
1.空指针也可以调用成员函数，但也要注意有没有用到this指针
但是不能访问成员属性
*/
class person
{
public:
	void showClassName()
	{
		cout << "this is class name" << endl;
	}
	void showpersonname()
	{
		//报错的原因是因为传入的指针是为NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << this->m_Age << endl;
  //默认每一个成员属性前都有一个this指针，表示当前对象的成员属性
	}
	int m_Age;
};
void test01()
{
	person* p = NULL;
	p->showClassName();
	p->showpersonname();
}
int main()
{
	test01();
	system("pause");
	return 0;
}