#include <iostream>
#include <functional>
using namespace std;
/*
算术仿函数：
1.功能：
 1.实现四则运算
 2.其中negate是一元运算，其余的都是二元运算
2.仿函数原型：
 1.template<class T> T plus<T>:加法仿函数
 2.template<class T> T minus<T>:减法仿函数
 3.template<class T> T multiplies<T>:乘法仿函数
 4.template<class T> T divides<T>:除法仿函数
 5.template<class T> T modulus<T>:取模(求余数)仿函数
 6.template<class T> T negate<T>:取反仿函数

*/
void test01()//取反
{
	negate<int> n;
	cout <<n(50)<< endl;
}
void test02()
{
	plus<int> pls;
	cout << pls(10, 20) << endl;
	modulus<int> mod;
	cout << mod(105,50) << endl;//求余数

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}