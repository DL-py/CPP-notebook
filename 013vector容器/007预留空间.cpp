#include <iostream>
#include <vector>
using namespace std;
/*
预留空间：减少vector在动态扩展容量时的扩展次数
reserve(int len);容器预留len个元素长度，预留位置不初始化，元素不可以访问

*/
void test01()
{
	vector<int> v;
	int* p = NULL;
	int num = 0;
	//利用reserve预留空间
	v.reserve(100000);
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "分配内存的次数： " << num << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}