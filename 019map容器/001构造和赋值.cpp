#include <iostream>
#include <map>
using namespace std;
/*
����͸�ֵ��
1.���죺
 1.map<T1, T2> mp:Ĭ�Ϲ���
 2.map& map<T1,T2> mp2(const map<T1,T2> &mp1):��������
2.��ֵ��
map& operator=(const map &mp):���صȺ������
ע�⣺map������Ԫ�ض��ǳɶԳ��֣���������ʱҪ���ö��鷽ʽ
*/
void Printmap(const map<int, int>& mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << (*it).first << " value= " << (*it).second << endl;
	}
}
void test01()
{
	map<int, int>mp1;//Ĭ�Ϲ��캯��
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(3, 30));
	mp1.insert(pair<int, int>(2, 20));
	mp1.insert(pair<int, int>(4, 40));
	Printmap(mp1);//�Զ�����
	//�������캯����
	map<int, int> mp2(mp1);
	Printmap(mp2);
	//��ֵ����:
	map<int, int> mp3;
	mp3 = mp2;
	Printmap(mp3);
}
int main()
{
	test01();
	system("pause");
	return 0;
}