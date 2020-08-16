#include <iostream>
#include <map>
using namespace std;
/*
�����ɾ����
1.insert(elem):�������в���Ԫ��
2.clear():�������Ԫ��
3.erase(pos):ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
4.erase(beg,end):ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ���ֵ
5.erase(key):ɾ�������м�ֵΪΪkey��Ԫ��
*/
void Printmap(const map<int, int>& mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << (*it).first << "value= " << (*it).second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int>m;
	//���룺��һ��
	m.insert(pair<int, int>(1, 10));
	//���룺�ڶ���
	m.insert(make_pair(2, 20));
	//���룺������
	m.insert(map<int, int>::value_type(3, 30));
	//���룺������
	m[4] = 40; 
	//[]������ȥ��������;��������key������value
	cout << m[5] << endl;
	Printmap(m);
	//ɾ����
	m.erase(m.begin());
	Printmap(m);
	m.erase(3);//����keyɾ��
	Printmap(m);
	//��գ�
	m.erase(m.begin(), m.end());
	m.clear();
	Printmap(m);
	
}
int main()
{
	test01();
	system("pause");
	return 0;
}