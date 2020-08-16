#include<iostream>
#include <string.h>
using namespace std;
/*
类 = 成员属性（成员变量） + 成员方法（成员函数）
//访问权限：
public        公用权限      类内可以访问，类外也能访问
protected     保护权限      类内可以访问，类外不能访问   子类可以访问
private       私有权限      类内可以访问，类外不能访问   子类不能访问
*/


class person
{
public:
	//一般通过公共方法来访问和修改私有属性
	void Set_name(string name)
	{
		m_name = name;
	}
	string get_name()
	{
	  return m_name;
	}
 private:
	 string  m_name;
};

class Student
{
  public:
	  string name;//公共权限
	  int  m_id;
  protected:
	  string  car;
  private:
	 int m_password;
public: 
	void func()
	{
		name = "李四";
		car = "拖拉机";
		m_password = 12345;
	}
	  void Set_name(string i)
	  {
		  name = i;
	  }

	  void Show_name()
	  {
		  cout << "学生姓名:" << name <<"学号："<<m_id<<endl;
	  }
};

int main()
{
	person  P1;//创建一个对象（实例化一个对象）
	Student  S1;
	P1.Set_name("李四");
    cout<<P1.get_name()<< endl;
	S1.Set_name("张三");
	S1.m_id = 1;
	S1.Show_name();
	system("pause");
	return 0;
}