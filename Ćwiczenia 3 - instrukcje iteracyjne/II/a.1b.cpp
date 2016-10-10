#include<iostream>
using namespace std;
int main()
{
	int x, i, tab[1000];
	cin >> x;
	for (i = 0; i < x; i++) {
		cin >> tab[i];
	}

	for (i = 0; i < x; i++) {
		if (tab[i] % 3 != 0) {
			cout << tab[i] << " ";
		}
	}
	system("pause");
	return 0;
}