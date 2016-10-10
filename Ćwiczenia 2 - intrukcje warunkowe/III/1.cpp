#include<iostream>

using namespace std;

int main() {
	int a, b, c ,d;
	cout << "Podaj a, b , c i d:\n";
	cin >> a >> b >> c >> d;
	if ( a%2==0 || b%2==0 || c % 2 == 0 || d % 2 == 0) {
		cout<< "TAK\n";
	}
	else if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 != 0) {
		cout << "NIE\n";
	}
	system("PAUSE");
}