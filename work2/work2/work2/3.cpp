//ʵ��2 ������
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
	cout << "������һ����:" << endl;
	cin >> n;
	if (prime(n))
	{
		cout << n << "������." << endl;
	}
	else
	{
		cout << n << "��������." << endl;
	}
	system("pause");
	return 0;
}
