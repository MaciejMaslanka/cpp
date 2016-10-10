#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int i, n;
	double d, g, dx, s, w, l;
	cout << "n  = "; cin >> n;
	do {
		cout << "d = "; cin >> d;
		cin.clear();
	} while(d<1);
	do {
	cout << "g = "; cin >> g;
	} while(g<1);
	s = 0;
	dx = (g - d) / n;

	for (i = 0; i < n; i++) {
		w = log(d + i*dx)*dx;
		s = s + w;
	}
	cout << "wartosc calki oznaczonej w przedziale " << "<" << d << "," << g << ">" << " jest rowna = " << s << endl;
	getchar(); getchar();
	return 0;
}