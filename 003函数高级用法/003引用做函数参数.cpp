#include<iostream>
using namespace std;
/*
����������������
1.ע�⣺
 1.��Ҫ���ؾֲ����������ã���Ϊ���ú��������󣬾ֲ������ᱻ���
 2.���ÿ�����Ϊ�����ķ���ֵ
*/
void swap(int& i, int& j)
{
	int temp;
	temp = i;
	i = j;
	j = temp;
}
int& test0()
{
	int a = 10;
	return a;
}
//�����ĵ��ÿ��Կ�����Ϊ��ֵ
int& test1()
{
	static int a = 10;
	return a;
}

void showvalue(const int& value)
{
	//value= 10000;��ʱ�����޸ģ���ֹ���������
	cout << "value: " << value << endl;
}
int main()
{
	//���������������Ĳ�����ʵ���β�������ʵ�ε�Ŀ��
	int  a = 10;
	int  b = 20;
	int& ref = test0();
	cout << "ref:" << ref << endl;//���ؾֲ����������ã�ֻ��ʹ��һ��
	cout << "ref:" << ref << endl;//���ý����þֲ������ͻᱻ��գ���ʾ����

	int& ref1 = test1();
	cout << "ref1:" << ref1 << endl;//���þ�̬���������ã������ظ�ʹ��
	cout << "ref1:" << ref1 << endl;//���ý����þ�̬�������ᱻ��գ���˿�������ʹ��

	test1() = 1000;	//�����ĵ��ÿ�����Ϊ��ֵ,��̬����a��ֵҲ�ᱻ�޸�

    //�������ý����������ݵ����ݣ�������ָ��
	swap(a, b);
	cout << "a= " <<a <<endl;
	cout << "b= " <<b<< endl;
	showvalue(a);
	system("pause");
	return 0;
}