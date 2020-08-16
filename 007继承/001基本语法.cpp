#include <iostream>
using namespace std;
/*
基本语法：
1.继承的基本方法：class 子类 : 继承方式 父类
2.子类也叫派生类
3.父类也叫基类
*/
class BasePage//公共页面的类
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册......(公共头部)" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作......（公共底部）" << endl;
	}
	void left()
	{
		cout << "C++、python、Java......（公共分类列表）" << endl;
	}
};
//Java页面：
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};
int main()
{
	Java java;
	java.content();
	java.footer();
	java.header();
	java.left();
	system("pause");
	return 0;
}