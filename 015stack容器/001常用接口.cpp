#include <iostream>
#include <stack>
using namespace std;
/*
常用接口
1.构造函数：
 1.stack<T> stk:采用模板类实现，stack的默认构造形式
 2.stack<T>(const stack<T> &stk):拷贝构造函数
2.赋值操作：
 1.stack& operator=(const stack &stk):重载等号操作符
3.数据存取：
 1.push:向栈顶添加元素
 2.pop:从栈顶移除第一个元素
 3.top():返回栈顶元素
4.大小操作：
 1.empty():判断栈堆是否为空
 2.size():返回栈的大小
*/
void test01()
{
	stack<int> stk;
	//入栈：
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	cout << "栈中的大小" << stk.size() << endl;
	while (!stk.empty())
	{
		cout << "栈顶元素为：" << stk.top() << endl;
		stk.pop();
	}
	cout << "栈中的大小" << stk.size()<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}