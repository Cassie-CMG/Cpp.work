//实验2第一题
#include <cstdlib>
#include <iostream>
using namespace std;

int hcf(int n, int m)
{
	int temp, r;
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	while ((r = n % m) != 0)
	{
		n = m;
		m = r;
	}
	return m;
}

int lcd(int n, int m, int h)
{
	return  m * n / h;
}

int main()
{
	int n, m, h, l;
	cout << "请输入两个数：n,m" << endl;
	cin >> n >> m;
	h = hcf(n, m);
	cout << "最大公约数为：" << h << endl;
	l = lcd(n, m, h);
	cout << "最小公倍数为：" << l << endl;
	system("pause");
	return 0;
}

