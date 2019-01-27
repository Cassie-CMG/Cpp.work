//สตั้2ตฤ6
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int i = 0;
	int j = 0;
	int a[10][10];
	for (i = 0; i < 10; i++)
	for (j = 0; j <= i; j++)
	{

		if (i == j || j == 0)
		{
			a[i][j] = 1;
		}
		else
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}