#include <iostream>
#include <stdlib.h>
using namespace std;
int length(char*a)
{
	int len = 0;
	if (*a == '\0')
	{
		len = 0;
	}
	else
	{
		len = length(a + 1) + 1;
	}
	return len;
}

int main()
{
	char a[20];
	cout << "�������ַ���:" << endl;
	cin >> a;
	cout << "����Ϊ:" << length(a) << endl;
	system("pause");
	return 0;
}

