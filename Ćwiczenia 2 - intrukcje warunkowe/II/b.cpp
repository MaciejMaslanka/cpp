#include<iostream>

using namespace std;

int main() {
	double x, wynik;
	cout << "Podaj x:\n";
	cin >> x;
	if (x < 0) {
		wynik = sqrt(-x);
	}
	else if (0 <=x<=10){
	wynik = pow(10 - x, 2);
	}
	else if (x > 10) {
	wynik = sqrt(x - 10);
	}
	cout << "Wynik:\n"<<wynik<<"\n";
	system("PAUSE");
}