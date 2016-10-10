#include<iostream>
using namespace std;
int main()
{
	double x,w,y;
	cout << "Pierwiastek kwadratowy\n";
	cout << "Podaj wartosc x = ";
	cin >> x;
	cout << "Podaj dokladnosc eps = ";
	cin >> y;
	w = 1.0;
	while (abs(w*w - x) >= y) {
		w = 1.0 / 2 * (x / w + w);
	}
	cout <<"Pierwiastek kwadratowy z liczby "<<x<<" = "<<w<<"\n";
	getchar(); getchar();
	return 0;
}