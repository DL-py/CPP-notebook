#include <iostream>
using namespace std;
/*
new���÷�������Ա�ڶ�����������
delete���÷����ͷŶ����ı�����
1.�ͷű�����delete ������;
2.�ͷ����飺delete [] ������;
*/
int * test1()
{
	int *p = new int(10);//�ڶ�����������
	return p;
}

int * test2()
{
	int* arr = new int[10];//�ڶ�����������

	for (int i = 0; i < 10; i++)
	{
		arr[i] = 100 + i;
	}
	for(int i=0;i<10;i++)
	{
		cout << arr[i] << endl;
    }
	return arr;
}
int main()
{
	  int * p = test1();
	  int *arr = test2();
	  cout << *p << endl;
	  cout << *p << endl;
	  delete p;//�ͷű���
	  delete[] arr;//�ͷ�����

	return 0;
}
