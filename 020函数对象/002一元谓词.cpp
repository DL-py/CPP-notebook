#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
һԪν�ʣ�


*/
class CreatorFive
{
public:
	bool operator()(int val) const
	{
		return val > 5;
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//������������û�д���5�����ݣ�
	//CreatorFive():�����ĺ�������
	vector<int>::iterator it = find_if(v.begin(), v.end(), CreatorFive());
	if (it == v.end())
	{
		cout << "δ�ҵõ�" << endl;
	}
	else
	{
		cout << "�ҵ��˴���5������Ϊ��" << *it << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}