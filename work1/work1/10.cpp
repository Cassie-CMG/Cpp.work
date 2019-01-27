//实验1的10题
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "请输入x的值:";
	cin >> x;
	if (x < 1)
	{
		y = x;
		cout << "x=" << x << ",y=x=" << y;
	}
	if (x >= 1 && x < 10)
	{
		y = 2 * x - 1;
		cout << "x=" << x << ",y=2*x-1=" << y;
	}
	if (x >= 10)
	{
		y = 3 * x - 11;
		cout << "x=" << x << ",y=3*x-11=" << y;
	}
	cout << endl;
	system("pause");
	return 0;
}