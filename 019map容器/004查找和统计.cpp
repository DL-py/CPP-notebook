#include <iostream>
#include <map>
using namespace std;
/*
���Һ�ͳ�ƣ�
1.find(key):����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�
����set.end()
2.count(key):����key��Ԫ�ظ���
*/
void test01()
{
	map<int, int>mp;
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(3, 30));
	//���ң�
	map<int,int>::iterator it = mp.find(3);
	if (it != mp.end())
	{
		cout << "�鵽��Ԫ��key= " << (*it).first<<"value = "<<(*it).second << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
	//ͳ�ƣ�
	int n = mp.count(3);
	cout << "n = " << n << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}