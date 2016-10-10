#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int main() {
	double a, b, c, h, p, d, v, o, e, g, f;
	cout << "podaj dlugosc boku w szeciokacie foremnym a: " << endl;
	cout << "podaj dlugosc wysokosci graniastoslupa h: " << endl;
	cin >> a >> h;

	p = 3 * pow(a, 2)*sqrt(3) / 2;

	cout << "Pole podstawy ostroslupa Pp=" << p << "\n";


	f = p*h / 3;
	cout << "Objetosc ostroslupa V=" << f << "\n";

	c = sqrt(pow(h, 2) + pow(a, 2));
	g = sqrt(pow(c, 2) - pow(a / 2, 2));
	d = 3*(a*g);
	cout << "Pole powierzchni bocznej ostroslupa Pb=" << d << "\n";

	v = p + d;
	cout << "Powierzchnia calkowita ostroslupa Pc=" << v << "\n";
	cout << "\n"; system("pause");
}
