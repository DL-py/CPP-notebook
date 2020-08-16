#include <iostream>
#include <map>
using namespace std;
/*
��С�ͽ�����
1.empty():�ж������Ƿ�Ϊ��
2.size():����������Ԫ�ص���Ŀ
3.swap(mp):����������������
*/
void Printmap(const map<int,int> &mp)
{
	for (map<int, int>::const_iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key= " << (*it).first << "value= " << (*it).second << endl;
    }
	cout << endl;
}
void test01()
{
	map<int, int>mp1;
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(2, 20));
	mp1.insert(pair<int, int>(3, 30));
	map<int, int>mp2;
	mp2.insert(pair<int, int>(4, 100));
	mp2.insert(pair<int, int>(5, 200));
	mp2.insert(pair<int, int>(6, 300));
	if (mp1.empty())
	{
		cout << "mp1Ϊ��" << endl;
	}
	else
	{
		cout << "mp1��Ϊ��" << endl;
		cout << "mp1�Ĵ�СΪ: " << mp1.size() << endl;
	}
	cout << "����ǰ��" << endl;
	Printmap(mp1);
	Printmap(mp2);
	mp1.swap(mp2);
	cout << "������" << endl;
	Printmap(mp1);
	Printmap(mp2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}