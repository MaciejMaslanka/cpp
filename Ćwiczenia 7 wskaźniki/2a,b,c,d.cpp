#include<iostream>
#include<ctime>
using namespace std;
int*tablicaInt(int&n) {
	cout << "Podaj liczbe elemetnow tablicy ";
	cin >> n;
	int*a = new int[n];
	for (int i = 0; i < n; i++)
		*(a + i) = n - i;
	return a;
}
double*tablicaDouble(int&n, double &, double &);
void wyswietlInt(int tab[], int &);
void wyswietlDouble(double tab[], int &);
double srednia(int tab[], int &);
double odchylenia(int tab[], int &, double &);
int*tablicaC(int&n, int a[], double&);
void quick(int a[], int l, int p) {
	int i, j, x, w;
	i = l; j = p;
	x = a[l];
	do {
		while (a[i] < x)i++;
		while (a[j] > x)j--;
		if (i <= j) {
			w = a[i]; a[i] = a[j]; a[j] = w;
			i++; j--;
		}
	} while (i <= j);
	if (l < j) quick(a, l, j);
	if (i < p) quick(a, i, p);
}
int main() {
	int rozmiar;
	int*tablicaA = tablicaInt(rozmiar);
	cout << "Wyswietl tablice: ";
	wyswietlInt(tablicaA, rozmiar);
	cout << "\n";
	double si = srednia(tablicaA, rozmiar);
	cout << "Srednia: " << si;
	cout << "\n";
	cout << "Odchylenie standardowe: ";
	cout << odchylenia(tablicaA, rozmiar, si);
	double ui = odchylenia(tablicaA, rozmiar, si);
	double*tablicaB = tablicaDouble(rozmiar, si, ui);
	cout << "\n";
	wyswietlDouble(tablicaB, rozmiar);
	cout << "\n";
	int*tablica_C = tablicaC(rozmiar, tablicaA, si);
	wyswietlInt(tablica_C, rozmiar);
	delete[]tablicaA;
	delete[]tablicaB;
	delete[]tablica_C;
	getchar();
	getchar();
	return(0);
}
double srednia(int a[], int&n) {// obliczanie sredniej
	double s = 0;
	double x = 0;
	for (int*w = a; w < a + n; w++) {
		s += *w;
	}
	s = s / n;
	return s;
}
double odchylenia(int a[], int&n, double&s) {// obliczanie odchylenia standardowego
	double h = 0;
	for (int i = 0; i <n; i++) {
		h += pow(a[i] - s, 2);
	}
	h = sqrt(h / n);
	return h;
}
void wyswietlInt(int a[], int&n) {// wyswietlna tablice typu int
	for (int*w = a; w < a + n; w++)
		cout << *w << " ";
}
void wyswietlDouble(double b[], int&n) {// wyswietla tablice typu double
	for (double*w = b; w < b + n; w++)
		cout << *w << " ";
}
double*tablicaDouble(int&n, double&s, double&OdchylenieStandardowe) {// tworzy tablice z przedzialu (srednia - odchylenie standardowe, srednia + odchylenie standardowe)
	double*b = new double[n];
	for (int i = 0; i < n; i++)
		*(b + i) = (s - OdchylenieStandardowe) + ((s + OdchylenieStandardowe) - (s - OdchylenieStandardowe))*double(rand()) / RAND_MAX;
	return b;
}
int*tablicaC(int&n, int a[], double&s) {// sortuje wartoœci tablicy a, mniejsze od œredniej po lewej stronie, wieksze od sredniej po prawej (umieszczane sa w nowej tablicy c)
	int*mniejszeOdSredniej = new int[n];
	int *wiekszeOdSredniej = new int[n];
	int k = 0, l = 0, o = 0, d = 0;
	int*c = new int[n];// tablica c
	for (int i = 0; i < n; i++) {
		if (a[i] < s) {
			*(mniejszeOdSredniej + o) = a[i];
			o++;
			k++;
		}
		else {
			*(wiekszeOdSredniej+ d) = a[i];
			d++;
			l++;
		}
	}
	quick(mniejszeOdSredniej, 0, k - 1);
	quick(wiekszeOdSredniej, 0, l - 1);
	int i = 0, j = 0;
	for (i; i < k; i++) {
		*(c + i) = *(mniejszeOdSredniej + i);
	}
	int f = i;
	for (i; i < l + f; i++) {
		*(c + i) = *(wiekszeOdSredniej + j);
		j++;
	}
	delete[]mniejszeOdSredniej;
	delete[]wiekszeOdSredniej;
	return c;
}