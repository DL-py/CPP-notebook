#include <iostream>
#include <queue>
using namespace std;
/*
���ýӿڣ�
1.���캯����
 1.queue<T> que��queue������ģ��ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
 2.queue(const queue & que):�������캯��
2.��ֵ������
 1.queue& operator=(const queue &que)://���صȺ������
3.���ݴ�ȡ��
 1.push(elem):��������������
 2.pop():�Ӷ�ͷ�Ƴ���һ������
 3.back():�������һ������
 4.front():���ص�һ������
4.��С����:
 1.empty():�ж϶����Ƿ�Ϊ��
 2.size():���ض��еĴ�С
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
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���еĴ�С�� " << q.size() << endl;
	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
	while (!q.empty())
	{
		cout << "��ͷԪ�أ� " << q.front().m_Name << "���䣺 " << q.front().m_Age << endl;
		cout << "��βԪ�أ� " << q.back().m_Name << "���䣺 " << q.back().m_Age << endl;
		q.pop();
    }
	cout << "���еĴ�С�� " << q.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}