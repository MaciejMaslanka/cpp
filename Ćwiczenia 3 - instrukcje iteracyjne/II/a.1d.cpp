#include<iostream>
using namespace std;
int main()
{
	int n,i,tab[1000],b,m;
	cin >> n>>m;
	for (i = 0; i < n; i++) {
		cin >> tab[i];
	}
	b = 0;
	for (i = 0; i < n; i++) {
		b = b + tab[i];
		}
	if (b%m == 0) {
		cout << "TAK\n";
	}
	else {
		cout << "NIE\n";
	}

	system("pause");
	return 0;
}