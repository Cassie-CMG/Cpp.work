//ʵ��1��15��
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int p, r, n, m, temp;
	cout << "������������: n,m"<<endl;
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
	cout << "���Լ��Ϊ��" << n << endl;
	cout << "��С������Ϊ��" << p / n << endl;
	system("pause");
	return 0;
}