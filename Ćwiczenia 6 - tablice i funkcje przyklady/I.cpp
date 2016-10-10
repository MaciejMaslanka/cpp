#include<iostream>
#include<ctime>
#include<string>
#include<climits>
using namespace std;
void calkowite(double t[], int n) {
	int d, g;
	cin >> d >> g;
	for (int i = 0; i < n; i++)
		t[i] = d + rand() % (g - d + 1);
}
void rzeczywiste(double t[], int n) {
	double d, g;
	cin >> d >> g;
	for (int i = 0; i < n; i++)
		t[i] = d + (g - d)*double(rand()) / RAND_MAX;
}
void wypisz(double t[], int n, string nazwa) {
	cout << "\n" << nazwa << ": ";
	for (int i = 0; i < n; i++) {
		cout << t[i] << " ";
	}
}
double max_dod(double t[], int n) {
	double max = -1;
	for (int i = 0; i < n; i++) {
		if (t[i] > 0 && t[i]>max)
			max = t[i];
	}
	return max;
}
int min_dod_ref(double t[], int n, double & min) {
	min = DBL_MAX;
	int jest = 0;
	for (int i = 0; i < n; i++) {
		if (t[i] > 0 && t[i] <= min) {
			min = t[i];
			jest = 1;
		}
	}
	return jest;
}
int spr_zaleznosc(double t[], int n) {
	if (t[0] != 0) {
		return 0;
	}
	if (t[1] != 1) {
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (t[i] != t[i - 1] + t[i - 2]) {
			return 0;
		}
	}
	return 1;
}
int liczba_cyfr(int a) {
	int i = 0;
	a = abs(a);
	while (a > 0) {
		i++;
		a /= 10;
	}
	return i;
}
int zlicz(double t[], int n, int k) {
	int licznik = 0;
	for (int i = 0; i < n; i++) {
		if (liczba_cyfr(t[i]) >= k)
			licznik++;
	}
	return licznik;
}
int cyfra_dziesiatek(int a, int&k) {
	int i = 0;
	a = abs(a);
	while (a > 0) {
		i++;
		if (i == 2)
			k = a % 10;
		a /= 10;
	}
	return i;
}
int nowa_tablica(double t1[], double t2[], int n) {
	int i = 0, j = 0;
	for (i = 0, j = 0; i < n - 1; i += 2, j++) {
		if (j % 2 == 0) {
			t2[j] = t1[i] + t1[i + 1];
		}
		else {
			t2[j] = t1[i] - t1[i + 1];
		}
	}
	return j;
}
int suma_cyfr_dziesiatek(double t[], int n) {
	int suma = 0;
	for (int i = 0; i < n; i++) {
		int c;
		if (cyfra_dziesiatek(t[i], c) == 2)
			suma = suma + c;
	}
	return suma;
}
int main() {
	const int N = 1000;
	double a[N], b[N], max, najmniejsza;
	int n, jest, liczba_cyfr = 3, m, suma;
	char wybor;
	srand(unsigned(time(0)));
	cout << "1. Generuj ciag liczb calkowitych.\n";
	cout << "2. Generuj ciag liczb rzeczywistych\n";
	cin >> wybor;
	switch (wybor) {
	case '1': cout << "podaj n: ";
		cin >> n;
		cout << "podaj zakres generowanych wartosci (d i g)\n";
		calkowite(a, n);
		wypisz(a, n, "tablica a ");
		max = max_dod(a, n);
		if (max < 0) {
			cout << "\nbrak dodatnich";
		}
		else {
			cout << "\nmax_dod=" << max;
		}
		jest = min_dod_ref(a, n, najmniejsza);
		if (jest) {
			cout << "\nmin_dod=" << najmniejsza;
		}
		else {
			cout << "\nbrak dodatniej wartosci w ciagu";
		}
		if (spr_zaleznosc(a, n)) {
			cout << "\nspelnia";
		}
		else {
			cout << "\nniespelnia";
		}
		cout << "\n\nilosc liczb o co najmniej " << liczba_cyfr << " cyfrach = ";
		cout << zlicz(a, n, liczba_cyfr);
		m = nowa_tablica(a, b, n);
		wypisz(b, m, "tablica b: ");
		suma = suma_cyfr_dziesiatek(b, m);
		cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych = " << suma;
		if (suma >= 10) {
			cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych = " << suma;
		}
		if (suma >= 10) {
			cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych jest >= 10";
		}
		else {
			cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych jest < 10";
		}

		break;
	case '2': cout << "podaj n: ";
		cin >> n;
		cout << "podaj zakres generowanych wartosci (d i g)\n";
		rzeczywiste(a, n);
		wypisz(a, n, "tablica a: ");
		max = max_dod(a, n);
		if (max < 0) {
			cout << "\nbrak dodatnich";
		}
		else {
			cout << "\nmax_dod=" << max;
		}
		jest = min_dod_ref(a, n, najmniejsza);
		if (jest) {
			cout << "\nmin_dod=" << najmniejsza;
		}
		else {
			cout << "\nbrak dodatniej wartosci w ciagu";
		}
		if (spr_zaleznosc(a, n)) {
			cout << "\nspelnia";
		}
		else {
			cout << "\nniespelnia";
		}
		cout << "\n\nilosc liczb o co najmniej " << liczba_cyfr << " cyfrach = ";
		cout << zlicz(a, n, liczba_cyfr);
		m = nowa_tablica(a, b, n);
		wypisz(b, m, "tablica b: ");
		suma = suma_cyfr_dziesiatek(b, m);
		cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych = " << suma;
		if (suma >= 10) {
			cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych = " << suma;
		}
		if (suma >= 10) {
			cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych jest >= 10";
		}
		else {
			cout << "\n\nsuma cyfr dzies. w lb. 2 cyfrowych jest < 10";
		}
		break;
	default:
		cout << "Nie ma takiej opcji.\n";
	}
	getchar(); getchar();
}