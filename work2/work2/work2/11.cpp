//151าณ ตฺ11ฬโ
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char a[5] = { '*', '*', '*', '*', '*' };
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		cout << endl;
		cout << "    ";
		for (j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (k = 0; k < 5; k++)
		{
			cout << a[k];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
