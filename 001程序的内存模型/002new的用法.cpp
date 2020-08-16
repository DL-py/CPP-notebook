#include <iostream>
using namespace std;
/*
new的用法：程序员在堆区创建变量
delete的用法：释放堆区的变量：
1.释放变量：delete 变量名;
2.释放数组：delete [] 变量名;
*/
int * test1()
{
	int *p = new int(10);//在堆区创建变量
	return p;
}

int * test2()
{
	int* arr = new int[10];//在堆区创建数组

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
	  delete p;//释放变量
	  delete[] arr;//释放数组

	return 0;
}
