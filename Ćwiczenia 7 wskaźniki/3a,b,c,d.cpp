#include<iostream>
#include<ctime>
using namespace std;
int main() {
	// tablica dwuwymiarowa wskazywana wskaznikiem
	int n = 5;
	int m = 5;
	// definicja wskaznika do wskazywania elementow tablicy dwuwymiarowej
	double**tabNr1;
	double**tabNr2;
	double**tablicaZawierajacaWartosciDzialan;
	// utworzenie n=elementowej tablicy wskaznikow
	tabNr1 = new double*[n];
	for (int i = 0; i < n; i++) {
	// utworzenie m-elemntowej tablicy wskazywanej wskaznikiem tabNr1[i]
		tabNr1[i] = new double[m];
	}
	tabNr2 = new double*[n];
	for (int i = 0; i < n; i++) {
		tabNr2[i] = new double[m];
	}
	tablicaZawierajacaWartosciDzialan = new double*[n];
	for (int i = 0; i < n; i++) {
		tablicaZawierajacaWartosciDzialan[i] = new double[m];
	}
	// wygenerowanie wartosci dla tablic
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			tabNr1[i][j] = double(1 + (100 - 1)* double(rand()) / RAND_MAX);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "  " << tabNr1[i][j];
		cout << "\n";
	}
	cout << "\n\n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			tabNr2[i][j] = double(1 + (100 - 1)* double(rand()) / RAND_MAX);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "  " << tabNr2[i][j];
		cout << "\n";
	}
	cout << "\n\n";
	cout << "  dodawanie macierzy\n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			tablicaZawierajacaWartosciDzialan[i][j] = tabNr1[i][j] + tabNr2[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "  " << tablicaZawierajacaWartosciDzialan[i][j];
		cout << "\n";
	}
	cout << "\n";
	cout << "\n";
	cout << "  mnozenie macierzy \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			tablicaZawierajacaWartosciDzialan[i][j] = tabNr1[i][j] * tabNr2[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "  " << tablicaZawierajacaWartosciDzialan[i][j];
		cout << "\n";
	}
	delete[] tabNr1;
	delete[] tabNr2;
	delete[] tablicaZawierajacaWartosciDzialan;
	getchar();
	getchar();
	return(0);
}
//zwolnienie pamieci
