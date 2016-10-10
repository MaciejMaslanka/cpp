#include <iostream>
using namespace std;
int main(){

	int a,b,c,d,e,f;
	cout << "Wpisz predkosci robota A \n";
	cin >> a >> b>>c;
	cout << "Wpisz predkosci robota B \n";
	cin >> d >> e >> f;
	if ((a + b + c) > (d + e + f)) {
		cout << "A\n";
	}
	if ((a + b + c)<(d + e + f)) {
		cout << "B\n";
	}
	system("PAUSE");
}