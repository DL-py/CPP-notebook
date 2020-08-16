#include <iostream>
#include <queue>
using namespace std;
/*
常用接口：
1.构造函数：
 1.queue<T> que：queue采用类模板实现，queue对象的默认构造形式
 2.queue(const queue & que):拷贝构造函数
2.赋值操作：
 1.queue& operator=(const queue &que)://重载等号运算符
3.数据存取：
 1.push(elem):向队列里添加数据
 2.pop():从队头移除第一个数据
 3.back():返回最后一个数据
 4.front():返回第一个数据
4.大小操作:
 1.empty():判断队列是否为空
 2.size():返回队列的大小
*/
class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};
void test01()
{
	queue<Person> q;
	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙僧", 800);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列的大小： " << q.size() << endl;
	//判断只要队列不为空，查看队头，查看队尾，出队
	while (!q.empty())
	{
		cout << "队头元素： " << q.front().m_Name << "年龄： " << q.front().m_Age << endl;
		cout << "队尾元素： " << q.back().m_Name << "年龄： " << q.back().m_Age << endl;
		q.pop();
    }
	cout << "队列的大小： " << q.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}