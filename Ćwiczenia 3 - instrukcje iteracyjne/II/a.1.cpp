#include<iostream>
using namespace std;
int main()
{
	const int N = 1000;
	int x, i, raz[N], dwa[N], p;
	cin >> x;
	for (i = 0; i < x; i++) {
		cin >> raz[i] >> dwa[i];
	}
	for (i = 0; i <x; i++) {
		for (p = raz[i]; p <= dwa[i]; p++) {
				cout << p << " ";
			}
			cout << "\n";
		}

	system("pause");
	return 0;
}