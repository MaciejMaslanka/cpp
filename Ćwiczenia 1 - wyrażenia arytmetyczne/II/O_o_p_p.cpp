#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int main() {
	double a, b, c, h, p, d, v, o, e, g, f;
	cout << "podaj dlugosci bokow a i b podstawy ostroslupa bedacego prostokatem: " << endl;
	cout << "lub przekatna prostokata i jeden z bokow: " << endl;
	cout << "podaj dlugosc wysokosci graniastoslupa h: " << endl;
	cout << "lub dlugosc ramienia : " << endl;
	cin >> a >> b >> o >> h >> e;

	if (a <= 0)
		a = sqrt(pow(o, 2) - pow(b, 2));
	else if (b <= 0)
		b = sqrt(pow(o, 2) - pow(a, 2));

	p = a*b;

	cout << "Pole podstawy ostroslupa Pp=" << p << "\n";
	if (h <= 0)
		h = sqrt(pow(e, 2) - pow((sqrt(pow(a, 2) + pow(b, 2)) / 2), 2));

	f = p*h / 3;
	cout << "Objetosc ostroslupa V=" << f << "\n";

	c = sqrt(pow(h, 2) + pow(a / 2, 2));
	g = sqrt(pow(h, 2) + pow(b / 2, 2));
	d = (a*c) + (b*g);
	cout << "Pole powierzchni bocznej ostroslupa Pb=" << d << "\n";

	v = p + d;
	cout << "Powierzchnia calkowita ostroslupa Pc=" << v << "\n";
	cout << "\n"; system("pause");
}
