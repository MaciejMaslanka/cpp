#include <iostream>
using namespace std;
int main()

{

	int a, i, f, b, c, e, g;
	cout << "Wpisz trzy liczby calkowite niemniejsze od 0: \n";
	cin >> a >> b >> c;
	if (a >= 0 && b >= 0 && c >= 0) {
		f = a % 10;
		e = b % 10;
		g = c % 10;

		if (f < e && f < g) {
			cout << a << "\n";
		}
		if (e < f && e < g) {
			cout << b << "\n";
		}
		if (g < f && g < e) {
			cout << c << "\n";
		}
		if (f == e && f < g) {
			cout << a << "\n";
		}
		if (f < e && f == g) {
			cout << a << "\n";
		}
		if (f == e && f == g) {
			cout << a << "\n";
		}
		if (e == g && e < f) {
			cout << b << "\n";
		}
	}
	else {
		cout << "blad\n";
	}
	system("PAUSE");
	}