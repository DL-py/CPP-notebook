#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
/*
���õĿ������滻�㷨_replace_if:
1.���ܣ�����������������Ԫ�أ��滻Ϊָ����Ԫ��
2.����ԭ�ͣ�
replace_if(iterator beg,iterator end,_pred,newvalue)

*/
class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
class Replace
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(50);
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), Myprint());
	replace_if(v.begin(), v.end(), Replace(), 100);
	cout << endl;
	cout << "�滻�� " << endl;
	for_each(v.begin(), v.end(), Myprint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}