#include <iostream>
#include <string>
using namespace std;
int main()
{
	string imie;
	double a, b, c;
	cout << "Witaj ";
	cin >> imie;
	cout << "Witaj " << imie << "\n";
	cout << "Obliczenia arytmetyczne." << "\n";
	cout << "Podaj dwie liczby aby rozpoczac:" << "\n";
	cin >> a >> b;
	c = a + b;
	cout << "Wynik dodawania: " << c << "\n";
	c = a - b;
	cout << "Wynik odejmowania: " << c << "\n";
	c = a*b;
	cout << "Wynik mnozenia: " << c << "\n";
	if (b == 0) {
		cout << "Nie dzielimy przez 0" << "\n";
	}
	else {
		c = a / b;
		cout << "Wynik dzielenia: " << c << "\n";
	}
	system("pause");
	return(0);
}