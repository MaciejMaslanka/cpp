#include <iostream>
using namespace std;
int main(){
//sprawdzic, czy zadana liczba jest pierwsza;
	int n,d,e;
	bool b;
	cin >> n;
	if (n%1==0 && n%n==0) {
		for (int i = 1; i <= n; i++) {
			d = n%i;
			if (d == 0 && i > 1 && i < n) {
				b = false;
				break;
			}
			else
				b = true;
		}
	}
	if (b == false) {
		cout << "NIE\n";
	}
	else {
		cout << "TAK\n";
	}

	system("PAUSE");
}