#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;
/*
���������㷨_random_shuffle:
1.����������ϴ�ƣ�ָ����Χ�ڵ�Ԫ�ؽ����������˳��
2.����ԭ�ͣ�
 random_shuffle(iterator beg, iterator end)

�ܽ᣺
random_shuffle�Ƚ�ʵ�ã�ʹ��ʱ�ǵü�
*/
class MyPrint
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
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint());
}
int main()
{
	test01();
	system("pause");
	return 0;
}