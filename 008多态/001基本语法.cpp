#include <iostream>
using namespace std;
/*
�����﷨��
1.��̬��̬������������
 1.�м̳й�ϵ
 2.����Ҫ��д������麯��
2.��д�������ķ���ֵ���������������б�Ҫ��ȫ��ͬ
3.��̬��̬ʹ��
 1.�����ָ�������ָ������Ķ���
*/
class Animal
{
public:
	virtual void speak()//�麯��
	{
		cout << "������˵��" << endl;
	}
};
class Cat : public Animal
{
public:
	void speak()//�����vitual��д�ɲ�д
	{
		cout << "Сè��˵��" << endl;
	}
};
//��ַ��󶨣��ڱ���׶ξ�ȷ���˺����ĵ�ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а�
//���ǵ�ַ���
void dospeak(Animal& animal)//��������û�ָ��ָ������Ķ���
{
	animal.speak();
}
void test01()
{
	Cat cat;
	dospeak(cat);//c++�����������͵�ת��
}
void test02()
{
	cout << "size of animal=" << sizeof(Animal) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}