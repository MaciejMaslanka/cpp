#include<iostream>
using namespace std;
long long silnia(int n)
{
	long long s = 1;
	for (int i = 2; i <= n; i++)
		s *= i;
	return s;
}
int main()
{
	int n,x,znak=1;
	double b = 1, m = 1;
	cin >> x>>n;
	if (n < 0) {
		n = -n;
		znak = 0;
	}
	for (int i = 1; i <= n; i++) {
		if (!znak) {
			m = 1.0/x*m;
		}
		else {
			m = x*m;
		}
			b += m/silnia(i);
	}
	cout << b;
	getchar(); getchar();
}