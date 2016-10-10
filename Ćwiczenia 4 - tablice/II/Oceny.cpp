#include<iostream>
using namespace std;
int main() {
	int tab[1000], n, s[6];
	do {
		cin >> n;
		cin.clear();
	} while (n < 1 || n>1000);
	for (int i = 0; i < n; i++) {
		do {
			cin >> tab[i];
			cin.clear();
		} while (tab[i] < 1 || tab[i]>1000);
	}
	for (int i = 0; i < 6; i++) {
		s[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		if (tab[i] == 1) {
			s[0] += 1;
		}
		if (tab[i] == 2) {
			s[1] += 1;
		}
		if (tab[i] == 3) {
			s[2] += 1;
		}
		if (tab[i] == 4) {
			s[3] += 1;
		}
		if (tab[i] == 5) {
			s[4] += 1;
		}
		if (tab[i] == 6) {
			s[5] += 1;
		}
	}
	for (int i = 0; i < 6; i++) {
		cout << s[i]<<" ";
	}
	getchar(); getchar();
}