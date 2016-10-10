#include <iostream>
using namespace std;
int main()

{

	int a,b;
	cout << "Wpisz dwie liczby ca³kowite a i b: \n";
	cin >> a >> b;
	if (a % b == 0 || b %a == 0) {
		cout << "TAK\n";
	}
	else {
		cout << "NIE\n";
	}

	system("PAUSE");
}