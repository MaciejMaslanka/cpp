#include<iostream>
#include<iostream>
using namespace std;
int main() {
	double a, b, c, h, p, d, v, o, e, g ,f;
	for (;;)
	{
		char wybor;
		cout << "     MENU GLOWNE\n";
		cout << "--------------------\n";
		cout << "Oblicz pole powierzchni calkowitej i objetosc wybranej bryly:";
		cout << "\n1. graniastoslupa prostego o podstawie trapezu rownoramiennego ";
		cout << "\n2. graniastoslupa foremnego o podstawie szesciokata foremnego\n";
		cout << "3. ostroslupa o podstawie prostokata ";
		cout << "\n4. ostroslupa o podstawie szesciokata foremnego\n";
		cin >> wybor;
		switch (wybor)
		{
		case '1':
			cout << "podaj dlugosc podstaw trapezu a (krotsza dlugosc) i b: " << endl;
			cout << "podaj dlugosc ramiona c" << endl;
			cout << "podaj dlugosc wysokosci graniastoslupa d" << endl;
			cin >> a >> b >> c >> d;

			h = sqrt(pow(c, 2) - pow((b - a) / 2, 2));
			cout << "dlugosc wysokosci podstawy h=" << h << "\n";

			p = (a + b)*h / 2;
			cout << "pole podstawy trapezu rownoramiennego Pp=" << p << "\n";

			v = p*d;
			cout << "objetosc graniastoslupa V=" << v << "\n";

			o = (b*d) + 2 * (c*d) + (a*d);
			cout << "pole powierzchni bocznej graniastoslupa Pb=" << o << "\n";

			e = 2 * p + o;
			cout << "Powierzchnia calkowita graniastoslupa Pc=" << e << "\n";
			break;
		case '2':
			cout << "podaj dlugosc boku w szeciokacie foremnym a: " << endl;
			cout << "podaj dlugosc wysokosci graniastoslupa h: " << endl;
			cin >> a >> h;

			c = 3 * pow(a, 2)*sqrt(3) / 2;
			cout << "Pole podstawy szeciokata foremnego Pp=" << c << "\n";

			b = h*c;
			cout << "Objetosc graniastoslupa V=" << b << "\n";

			d = 6 * a*h;
			cout << "Pole powierzchni bocznej graniastoslupa Pb=" << d << "\n";

			p = 2 * c + d;
			cout << "Powierzchnia calkowita graniastoslupa Pc=" << p << "\n";
			break;
		case '3':
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
			break;
		case '4':
			cout << "podaj dlugosc boku w szeciokacie foremnym a: " << endl;
			cout << "podaj dlugosc wysokosci graniastoslupa h: " << endl;
			cin >> a >> h;

			p = 3 * pow(a, 2)*sqrt(3) / 2;

			cout << "Pole podstawy ostroslupa Pp=" << p << "\n";


			f = p*h / 3;
			cout << "Objetosc ostroslupa V=" << f << "\n";

			c = sqrt(pow(h, 2) + pow(a, 2));
			g = sqrt(pow(c, 2) - pow(a / 2, 2));
			d = 3 * (a*g);
			cout << "Pole powierzchni bocznej ostroslupa Pb=" << d << "\n";

			v = p + d;
			cout << "Powierzchnia calkowita ostroslupa Pc=" << v << "\n";
			break;
		default:
			cout << "Nie ma takiej opcji.\n ";
		}
		getchar(); getchar();
		system("cls");
	}
}