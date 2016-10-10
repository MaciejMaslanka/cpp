#include<iostream>
using namespace std;
int main() {
	int tab[1000], n[1000], d, k, j = 1, x, *s = new int[20000],g=0;
	do {
		cin >> d;
		cin.clear();
	} while (d < 1 || d>20);
	for (k = 1; k <= d; k++) {
		do {
			cin >> n[k];
			cin.clear();
		} while (n[k] < 2 || n[k]>1000);
		for (int i = 1; i <= n[k]; i++) {
			do {
				cin >> tab[i];
				cin.clear();
			} while (tab[i] < 1 || tab[i]>1000);

		}
		for (int i = 1; i <= n[k]; i++) {
			if (i % 2 == 0) {
				s[j] = tab[i];
				j++;
			}
		}
		for (int i = 1; i <= n[k]; i++) {
			if (i % 2 != 0) {
				s[j] = tab[i];
				j++;
			}
		}

	}
	for (k = 1; k <= d;k++){
	for (int i=1; i <= n[k]; i++) {
		cout << s[i+g] << " ";
		}
	g += n[k];
	cout << "\n";
	}
	getchar(); getchar();
}