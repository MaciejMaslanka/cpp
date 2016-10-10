#include<iostream>

using namespace std;

int main() {
	double x, wynik;
	cout << "Podaj x:\n";
	cin >> x;
	if (x >= 1) {
		wynik = pow(x - 1, 2);
	}
	else {
		wynik = pow(x + 1, 2);
	}
	cout << "Wynik:\n" << wynik << "\n";
	system("PAUSE");
}