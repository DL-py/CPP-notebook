#include <iostream>
using namespace std;
/*
����ģ�壺
1.����ģ�壺����һ��ͨ�ú������䷵��ֵ���ͺ��β����Ϳ��Բ�����ָ��
  ��һ�����������������
2.�﷨��
  template<typename T> ����һ��ģ�壬���߱�����T��ͨ����������
  //typename �����滻��class ���߻���û��ʲô����
3.����ģ���ʹ�ã�
 1.�Զ������Ƶ�
 2.��ʾָ������ 
*/
template <typename T>
void myswap(T &a, T &b)
{
	T temp;
	temp = b;
	b = a;
	a = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	myswap(a, b);//�Զ������Ƶ�
	myswap<int>(a, b);//��ʾָ������
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}