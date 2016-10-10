#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int main() {
	double a, b, c, h, p, d, v, o, e;
	cout << "podaj dlugosc podstaw trapezu a (krotsza dlugosc) i b: " << endl;
	cout << "podaj dlugosc ramiona c" << endl;
	cout << "podaj dlugosc wysokosci graniastoslupa d" << endl;
	cin >> a >> b >> c >> d;

	h =   sqrt(pow(c, 2) - pow((b - a) / 2, 2)) ;
	cout << "dlugosc wysokosci podstawy h=" << h << "\n";

	p = (a + b)*h / 2;
	cout << "pole podstawy trapezu rownoramiennego Pp=" << p << "\n";
	
	v = p*d ;
	cout << "objetosc graniastoslupa V=" << v << "\n";

	o = (b*d)+2*(c*d)+(a*d);
	cout << "pole powierzchni bocznej graniastoslupa Pb=" << o << "\n";

	e = 2 * p + o;
	cout << "Powierzchnia calkowita graniastoslupa Pc=" << e << "\n";
	cout << "\n"; system("pause");
}
