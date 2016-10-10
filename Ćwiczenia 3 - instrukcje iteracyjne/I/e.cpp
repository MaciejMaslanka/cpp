#include<iostream>
using namespace std;
int main()
{
	double x, wynik=1;
	int n,znak=1;
	cout << "Potegowanie\n";
	cout << "Podstawa x:\n";
	cin >> x;
	cout << "Wykladnik n:\n";
	cin >> n;
	if (n < 0) {
		n = -n;
		znak = 0;
	}
	for (int i = 1; i <= n; i++) {
		wynik *= x;
	}
	if (znak==0) {
		wynik = 1 / wynik;

	}
	if (n==0) {
		wynik = 1;
	}
	cout << x<<" "<< "do potegi " << n<<" "<< "jest rowne " << wynik<<"\n";
	system("PAUSE");
}