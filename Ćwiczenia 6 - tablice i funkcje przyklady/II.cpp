#include<iostream>
#include<ctime>
#include<string>
using namespace std;
void wpiszciag(double t[], int u) {
	for (int i = 0; i < u; i++) {
		cin >> t[i];
	}
}
void wygenerujciag(double t[], int n, double d, double g) {
	for (int i = 0; i < n; i++) {
		t[i] = d + (g - d)*double(rand()) / RAND_MAX;
	}
}
void wypisz(double t[], int n, string nazwa) {
	cout << "\n" << nazwa << ": ";
	for (int i = 0; i < n; i++) {
		cout << t[i] << " ";
	}
}
double min(double x, double y) {
	return x <= y ? x : y;
}
void bo(double t1[],double t2[],int n) {
	for (int i = 0; i < (n-1); i++) {
		t2[i] = min(t1[i] - t1[i + 1], 0);
	}
}
int liczbazer(double t[], int n) {
	int licznik = 0;
	for (int i = 0; i < n; i++) 
		if (t[i] == 0) 
			licznik++;
	return licznik;
}
const int N = 1000;
int main() {
		double a[N],b[N];
		char wybor;
		int n;
		double d, g;
		srand(unsigned(time(0)));
		cout << "     MENU GLOWNE\n";
		cout << "--------------------\n";
		cout << "1. Wpisz wlasny ciag ";
		cout << "\n2. Generowanie ciagu\n";
		cin >> wybor;
		switch (wybor)
		{
		case '1':
			cout << "Podaj dlugosc ciagu: ";
			cin >> n;
			cout << "Podaj wartosci ciagu:\n ";
			wpiszciag(a, n);
			wypisz(a, n, "ciag a");
			bo(a, b, n);
			wypisz(b, (n-1), "ciag b");
			cout << "\nliczba zer = " << liczbazer(b, n - 1);
			break;
		case '2':
			cout << "Podaj dlugosc ciagu: ";
			cin >> n;
			cout << "Podaj d i g: ";
			cin >> d >> g;
			wygenerujciag(a, n,d,g);
			wypisz(a, n, "ciag a");
			bo(a, b,n);
			wypisz(b, (n-1), "ciag b");
			cout << "\nliczba zer = " <<liczbazer(b,n-1);
			break;

		default:
			cout << "Nie ma takiej opcji.\n ";
		}
		getchar(); getchar();
}