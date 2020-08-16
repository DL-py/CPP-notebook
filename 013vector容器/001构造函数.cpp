#include <iostream>
#include <vector>
using namespace std;
/*
���캯��������vector����
1.vector<T> v:Ĭ�Ϲ��캯��
2.vector<T> v2(v1.begin(),v1.end()):��[v.begin(),v.end())�����е�Ԫ�ؿ�������
3.vector<T> v(n,elem):���캯����n��elem��������
4.vector<T> v(const vector &vec):�������캯�������ã�
*/
void Printvector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��캯��
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	Printvector(v1);
	
	vector<int> v2(v1.begin(), v1.end());//����������й���
	Printvector(v2);

	vector<int> v3(10,100);//n��elem
	Printvector(v3);

	vector<int> v4(v3);
	Printvector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}