#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
���õı����㷨_transform
1.������������һ��������
2.����ԭ�ͣ�
transform(iterator beg1,iterator end1,iterator beg2,_func)
beg1:Դ�����Ŀ�ʼ������
end1:Դ�����Ľ���������
beg2:Ŀ��������ʼ������
_func:������������
*/
class Trasform
{
public:
	int operator()(int val) 
	{
		return val;
	}
};
class Myprint
{
public:
	void operator()(int val) 
	{
		cout << val << " ";
	}
};
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	vector<int>v2;
	v2.resize(v.size());//���˵�Ŀ������������ǰ���ٿռ�����޷���������
	transform(v.begin(), v.end(), v2.begin(),Trasform());
	for_each(v2.begin(), v2.end(), Myprint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}