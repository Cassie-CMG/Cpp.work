//ʵ��1��16��
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0, space = 0, numbers = 0, other = 0;
	cout << "������һ���ַ�:" << endl;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
		{
			letters++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0'&&c <= '9')
		{
			numbers++;
		}
		else
		{
			other++;
		}			
	}
	cout << "letter:" << letters << ",space:" << space << ",number:" << numbers << ",other:" << other << endl;
	system("pause");
	return 0;
}