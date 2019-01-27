#include <iostream>
#include <stdlib.h>
using namespace std;
void input(int*number)
{
	int i;
	cout << "ÇëÊäÈë10¸öÊý£º" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> number[i];
	}		
}

void max_min_value(int*number)
{
	int*max, *min, *p, temp;
	max = min = number;
	for (p = number + 1; p < number + 10; p++)
	{
		if (*p>*max)
		{
			max = p;
		}
		else if (*p < *min)
		{
			min = p;
		}
	}
	temp = number[0];
	number[0] = *min;
	*min = temp;
	if (max == number)
	{
		max = min;
	}
	temp = number[9];
	number[9] = *max;
	*max = temp;
}

void output(int*number)
{
	int*p;
	for (p = number; p < number + 10; p++)
	{
		cout << *p << " ";
	}
	cout << endl;
}

int main()
{
	int number[10];
	input(number);
	max_min_value(number);
	output(number);
	system("pause");
	return 0;
}