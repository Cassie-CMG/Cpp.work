//实验2 第三题
#include <cstdlib>
#include <iostream>
using namespace std;

int prime(int n)
{
	int flag = 1, i;
	for (i = 2; i < n && flag == 1; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
		}
	}
	return(flag);
}

int main()
{
	int n;
	cout << "请输入一个数:" << endl;
	cin >> n;
	if (prime(n))
	{
		cout << n << "是素数." << endl;
	}
	else
	{
		cout << n << "不是素数." << endl;
	}
	system("pause");
	return 0;
}
