//实验2 第4题
#include <cstdlib>
#include <iostream>
using namespace std;
int fac(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}

int main()
{
	int a, b, c, sum = 0;
	cout << "请输入三个整数： a,b,c"<<endl;
	cin >> a >> b >> c;
	sum =  fac(a) + fac(b) + fac(c);
	cout << a << "!+" << b << "!+" << c << "!=" << sum << endl;
	system("pause");
	return 0;
}

