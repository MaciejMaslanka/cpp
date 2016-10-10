#include<iostream>

using namespace std;

int main() {
	double x,y, wynik;
	cout << "Podaj x i y:\n";
	cin >> x>> y;
	if (pow(x,2) > pow(y,2)) {
		wynik = sqrt(pow(x, 2) - pow(y, 2));
	}
	else if (pow(x, 2) == pow(y, 2)) {
	wynik = 0;
	}
	else if (pow(x, 2) < pow(y, 2)) {
	wynik = sqrt(pow(y, 2) - pow(x, 2));
	}
	cout << "Wynik:\n"<<wynik<<"\n";
	system("PAUSE");
}