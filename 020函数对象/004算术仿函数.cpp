#include <iostream>
#include <functional>
using namespace std;
/*
�����º�����
1.���ܣ�
 1.ʵ����������
 2.����negate��һԪ���㣬����Ķ��Ƕ�Ԫ����
2.�º���ԭ�ͣ�
 1.template<class T> T plus<T>:�ӷ��º���
 2.template<class T> T minus<T>:�����º���
 3.template<class T> T multiplies<T>:�˷��º���
 4.template<class T> T divides<T>:�����º���
 5.template<class T> T modulus<T>:ȡģ(������)�º���
 6.template<class T> T negate<T>:ȡ���º���

*/
void test01()//ȡ��
{
	negate<int> n;
	cout <<n(50)<< endl;
}
void test02()
{
	plus<int> pls;
	cout << pls(10, 20) << endl;
	modulus<int> mod;
	cout << mod(105,50) << endl;//������

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}