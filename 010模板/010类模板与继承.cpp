#include<iostream>
using namespace std;
/*
��ģ����̳У�
1.������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
2.�����ָ�����������޷�Ϊ��������ڴ�
3.��������ָ��������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
*/
template <class T>
class Base
{
public:
	T m;
};
class Son1 :public Base<int>//����֪��������T���������ͣ����ܼ̳и�����
{

};
template <class T1,class T2>
class Son2 :public Base<T2>//��������ָ��������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
{
public:
	Son2()
	{
		cout << "T1����������Ϊ" << typeid(T1).name() << endl;
		cout << "T2����������Ϊ" << typeid(T2).name() << endl;
	}
	T1 obj;
};
void test01()
{
	Son1 s1;

}
void test02()
{
	Son2<int, char>S2;
}
int main()
{
	test02();
	system("pause");
	return 0;
}