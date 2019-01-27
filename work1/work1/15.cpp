//实验1的15题
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int p, r, n, m, temp;
	cout << "请输入两个数: n,m"<<endl;
	cin >> n >> m;
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	p = n*m;
	while (m != 0)
	{
		r = n%m;
		n = m;
		m = r;
	}
	cout << "最大公约数为：" << n << endl;
	cout << "最小公倍数为：" << p / n << endl;
	system("pause");
	return 0;
}