#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int main() {
	double a, b, c, h, p, d, v, o, e;
	cout << "podaj dlugosc boku w szeciokacie foremnym a: " << endl;
	cout << "podaj dlugosc wysokosci graniastoslupa h: " << endl;
	cin >> a >> h;

	c = 3*pow(a, 2)*sqrt(3) / 2 ;
	cout << "Pole podstawy szeciokata foremnego Pp=" << c << "\n";
	
	b = h*c;
	cout << "Objetosc graniastoslupa V=" << b << "\n";

	d = 6*a*h;
	cout << "Pole powierzchni bocznej graniastoslupa Pb=" << d << "\n";

	p = 2*c + d;
	cout << "Powierzchnia calkowita graniastoslupa Pc=" << p << "\n";

	cout << "\n"; system("pause");
}
