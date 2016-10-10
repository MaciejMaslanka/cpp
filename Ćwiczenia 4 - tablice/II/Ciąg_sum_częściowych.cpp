#include<iostream>
using namespace std;
int main() {
	int *tab = new int[50000], *s = new int[50000], n;
	do {
		cin >> n;
		cin.clear();
	} while (n < 1 || n>50000);
	for (int i = 0; i < n; i++) {
		do {
			cin >> tab[i];
			cin.clear();
		} while (tab[i] < 1 || tab[i]>20000);
	}
	s[0] = tab[0];
	for (int i = 1; i < n; i++) {
		s[i] = tab[i] + s[i - 1];
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	getchar(); getchar();
}