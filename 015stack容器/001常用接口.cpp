#include <iostream>
#include <stack>
using namespace std;
/*
���ýӿ�
1.���캯����
 1.stack<T> stk:����ģ����ʵ�֣�stack��Ĭ�Ϲ�����ʽ
 2.stack<T>(const stack<T> &stk):�������캯��
2.��ֵ������
 1.stack& operator=(const stack &stk):���صȺŲ�����
3.���ݴ�ȡ��
 1.push:��ջ�����Ԫ��
 2.pop:��ջ���Ƴ���һ��Ԫ��
 3.top():����ջ��Ԫ��
4.��С������
 1.empty():�ж�ջ���Ƿ�Ϊ��
 2.size():����ջ�Ĵ�С
*/
void test01()
{
	stack<int> stk;
	//��ջ��
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	cout << "ջ�еĴ�С" << stk.size() << endl;
	while (!stk.empty())
	{
		cout << "ջ��Ԫ��Ϊ��" << stk.top() << endl;
		stk.pop();
	}
	cout << "ջ�еĴ�С" << stk.size()<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}