#include<iostream>
using namespace std;
/*
��ָ����ʳ�Ա������
1.��ָ��Ҳ���Ե��ó�Ա��������ҲҪע����û���õ�thisָ��
���ǲ��ܷ��ʳ�Ա����
*/
class person
{
public:
	void showClassName()
	{
		cout << "this is class name" << endl;
	}
	void showpersonname()
	{
		//�����ԭ������Ϊ�����ָ����ΪNULL
		if (this == NULL)
		{
			return;
		}
		cout << "age=" << this->m_Age << endl;
  //Ĭ��ÿһ����Ա����ǰ����һ��thisָ�룬��ʾ��ǰ����ĳ�Ա����
	}
	int m_Age;
};
void test01()
{
	person* p = NULL;
	p->showClassName();
	p->showpersonname();
}
int main()
{
	test01();
	system("pause");
	return 0;
}