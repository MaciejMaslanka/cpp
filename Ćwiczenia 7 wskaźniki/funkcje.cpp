#include <iostream>
#include<cmath>
#define M_PI 3.14159265358979323846
using namespace std;
void obwod(double x) {//obwod kola
	x = 2 * M_PI *x;
	cout << x;
}
void obwod(double a, double b, double c) {//obowd trojkata
	a = a + b + c;
	cout << a;
}
void obwod(double a, double b, double c, double d) {//obwod czworokata
	a = a + b + c + d;
	cout << a;
}
void obwod(double a, double b, double c, double d, double e) {//obwod pieciokata
	a = a + b + c + d + e;
	cout << a;
}
void obwod(double a, double b, double c, double d, double e, double f) {//obwod szesciokata
	a = a + b + c + d + e + f;
	cout << a;
}
int main() {
	double a, b, c, d, e, f;
	char i;
	cout << "Opcje: 1. Oblicz obwod kola || 2. Oblicz obwod trojkata || 3. Oblicz obwod czorokata || 4. Oblicz obwod pieciokata || 5. Oblicz obwod szesciokata ";
	cin >> i;
	switch(i){
	case '1': cout << "Wpisz promien: "; cin >> a; obwod(a); break;
	case '2': cout << "wpisz dlugosc bokow a, b i c: "; cin >> a >> b >> c; obwod(a, b, c); break;
	case '3': cout << "Wpisz dlugosc bokow a, b, c i d: "; cin >> a >> b >> c >> d;obwod(a, b, c, d); break;
	case '4': cout << "Wpisz dlugosc bokow a, b, c, d, i e: "; cin >> a >> b >> c >> d >> e; c;obwod(a, b, c, d, e); break;
	case '5': cout << "Wpisz dlugosc bokow a, b, c, d, e i f: "; cin >> a >> b >> c >> d >> e >> f;obwod(a, b, c, d, e, f); break;
	default: cout << "Nie ma tekiej opcji"; break;
	}
	getchar();
	getchar();
	return(0);
}#include <iostream>
#include<cmath>
#define M_PI 3.14159265358979323846
using namespace std;
void obwod(double x) {//obwod kola
	x = 2 * M_PI *x;
	cout << x;
}
void obwod(double a, double b, double c) {//obowd trojkata
	a = a + b + c;
	cout << a;
}
void obwod(double a, double b, double c, double d) {//obwod czworokata
	a = a + b + c + d;
	cout << a;
}
void obwod(double a, double b, double c, double d, double e) {//obwod pieciokata
	a = a + b + c + d + e;
	cout << a;
}
void obwod(double a, double b, double c, double d, double e, double f) {//obwod szesciokata
	a = a + b + c + d + e + f;
	cout << a;
}
int main() {
	double a, b, c, d, e, f;
	char i;
	cout << "Opcje: 1. Oblicz obwod kola || 2. Oblicz obwod trojkata || 3. Oblicz obwod czorokata || 4. Oblicz obwod pieciokata || 5. Oblicz obwod szesciokata ";
	cin >> i;
	switch(i){
	case '1': cout << "Wpisz promien: "; cin >> a; obwod(a); break;
	case '2': cout << "wpisz dlugosc bokow a, b i c: "; cin >> a >> b >> c; obwod(a, b, c); break;
	case '3': cout << "Wpisz dlugosc bokow a, b, c i d: "; cin >> a >> b >> c >> d;obwod(a, b, c, d); break;
	case '4': cout << "Wpisz dlugosc bokow a, b, c, d, i e: "; cin >> a >> b >> c >> d >> e; c;obwod(a, b, c, d, e); break;
	case '5': cout << "Wpisz dlugosc bokow a, b, c, d, e i f: "; cin >> a >> b >> c >> d >> e >> f;obwod(a, b, c, d, e, f); break;
	default: cout << "Nie ma tekiej opcji"; break;
	}
	getchar();
	getchar();
	return(0);
}