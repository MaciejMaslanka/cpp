#include <iostream>
using namespace std;
int main()
{
	int i, n;
	double d, g, dx, s, w,a,b;
	cout << "n  = "; cin >> n;
	cout << "a  = "; cin >> a;
	cout << "b =  "; cin >> b;
	cout << "d = "; cin >> d;
	cout << "g = "; cin >> g;
	s = 0;

	dx = (g - d) / n;

	for (i = 0; i < n; i++) {
		w = (a*(d + i * dx)*(d + i * dx)+b+ a*(d + dx*(i + 1))*(d + dx*(i + 1))+b)*dx / 2;
		s = s + w;
	}
	cout << "wartosc calki oznaczonej w przedziale " << "<" << d << "," << g << ">" << " jest rowna = " << s << endl;
	getchar(); getchar();
	return 0;
}