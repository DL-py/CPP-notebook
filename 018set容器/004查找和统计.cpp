#include <iostream>
#include <set>
using namespace std;
/*
���Һ�ͳ�ƣ�
1.���ң�
 1.find(key):����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ���������������
             ����set.end();
2.ͳ�ƣ�
 1.count(key):ͳ��key��Ԫ�ظ���;
*/
void test01()
{
	set<int> st1;
	st1.insert(10);
	st1.insert(20);
	st1.insert(30);
	st1.insert(40);
	set<int>::iterator it = st1.find(300);
	if (it != st1.end())
	{
		cout << "�ҵ�Ԫ��: " << *it << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ�أ� " << endl;
	}
	//ͳ�ƣ�
	int num = st1.count(30);
	cout << "Ԫ��30�ĸ���Ϊ��" << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
