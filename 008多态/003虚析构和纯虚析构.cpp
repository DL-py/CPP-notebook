#include <iostream>
#include <string>
using namespace std;
/*
�������ʹ���������
1.ʹ�ó�����
��̬ʹ��ʱ��������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ�����
���鹹���롣
2.�������ʹ��������Ĺ��ԣ�
 1.���Խ������ָ���ͷ��������ʱ���ɾ�������
 2.����Ҫ�о���ĺ���ʵ��
3.�������ʹ�������������
 ����Ǵ����������������ڳ����࣬�޷�ʵ��������
4.�������ʹ�������ֻ����һ��
*/
class Animal
{
public:
	Animal()
	{
		cout << "Amimal���캯���ĵ���" << endl;

	}
	virtual void speak() = 0;
	//virtual ~Animal()//��Ϊ������
 //  //���Խ������ָ���ͷ��������ʱ���ɾ�������
	//{
	//	cout << "Amimal�����������ĵ���" << endl;

	//}
	virtual ~Animal() = 0;//��������
	//���˴������������Ҳ���˳����࣬�޷�ʵ��������
	
};
Animal::~Animal()//����������ʵ��
{
	cout << "Animal�Ĵ��������ĵ���" << endl;
}

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name<<"Сè��˵��" << endl;
	}
	string* m_Name;
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat��������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
};
void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//�����ָ����������ʱ�򣬲�����������е����������������������
	//�ж������ԣ�������ڴ�й©
	delete animal;
}
int main()
{
	test01();
	system("pause");
	return 0;
}