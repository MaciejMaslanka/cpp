#include<iostream>
using namespace std;
int main()
{
	int n,znak=1,dokladnie=1,nie=1,pierwszy=1;
	double m = 1,u=1,x;
	cin >> x>>n;
	double b = 1;
	if (n < 0) {
		n = -n;
		znak = 0;
	}
	for (int i = 1; i <= n; i++) {
		if (!znak && !pierwszy) {
			m = m / x;
		}
		if (!znak && pierwszy) {
			m = 1.0 / (x*m);
			pierwszy = 0;
		}
		if (znak){
			m = x*m;
		}
		u *= (2 * i)*(2 * i - 1);
		if (!dokladnie) {
			b += (x*-m) / u;
		}
		if (!nie)
		{
			b += (-m / x) / u;
		}
		if (b == x && znak) {
			m = (x*x)*-m;
			b += m / u;
			dokladnie = 0;
		}
		if (b == x && !znak) {
			m = -m / (x*x);
			b += m / u;
			nie = 0;
		}
	}
	cout << b;
	getchar(); getchar();
}