//实验2的5
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	const int n = 5;
	int a[n], i, temp;
	cout << "请输入5个整数：" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "交换后的数组为：" << endl;
	for (i = 0; i <= n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
	for (i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}
