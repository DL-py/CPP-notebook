#include<iostream>
using namespace std;
/*
���ڵĳ�Ա�����ͳ�Ա�����Ƿֿ��洢��
1.�ն���ռ�õ��ڴ�ռ�Ϊ1��
 1.���������ÿ���ն���Ҳ����һ���ֽڵ��ڴ�ռ�
 2.Ϊ�����ֿն���ռ�ڴ�ռ��λ��
 3.ÿһ���ն���ҲӦ�þ���һ����һ�޶��ĵ�ַ
2.��������Ķ��󣬲���ռ�ö�����ڴ�
*/
class person
{
	int m_A;  //�Ǿ�̬��Ա����   ������Ķ�����
	static int m_B;   //��̬��Ա����     ��������Ķ�����
	void func1(){}    //�Ǿ�̬��Ա����   ��������Ķ�����
	void func2() {}   //��̬��Ա����     ��������Ķ�����
};
int person::m_B = 0;
void test01()
{
	person p;
	cout << "size of p =" << sizeof(p) << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}