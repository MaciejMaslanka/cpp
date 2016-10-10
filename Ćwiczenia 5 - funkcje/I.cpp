#include<iostream>
using namespace std;

double suma(double u, double k) {
	double x;
	x = u + k;
	return x;
}
double roznica(double u, double k) {
	double x;
	x = u - k;
	return x;
}
double iloczyn(double u, double k) {
	double x;
	x = u*k;
	return x;
}
double iloraz(double u, double k,int i) {
	double y[2];
	if (k==0&&i==1) {
		y[i] = 1;
	}
	if(k!=0&&i==0) {
		y[i] = u / k;	
	}
	return y[i];
}
double wartosc_bezwgledna(double u) {
	u = abs(u);
	return u;
}
double pierwiastek_kwadratowy(double u,int i) {
	double y[2];
	if (u < 0&&i==1) {
		y[i] = 1;
	}
	if(u>=0&&i==0) {
		y[i] = sqrt(u);
	}
	return y[i];
}
double potega(double u,double n,int i) {
	double y[2],x=1;
	if (n < 0 && u!=0&&i==0) {
		n = abs(n);
		u = 1.0 / u;
		for (int i=0; i < n; i++) {
			x *= u;
		}
		y[i] = x;
	}
	if (n == 0&&i==0) {
		y[i] = 1;
	}
	if (n < 0 && u == 0&&i==1) {
		y[i] = 1;
	}
	if(n>0&&i==0) {
		for (int i = 0; i < n; i++) {
			x *= u;
		}
		y[i] = x;
	}
	return y[i];
}
int main() {
	double u, k,x,y[2];
	char wybor;
	cout << "Dzialania arytemetyczne:\n";
	cout << "1. Suma\n";
	cout << "2. Roznica\n";
	cout << "3. Iloczyn\n";
	cout << "4. Iloraz\n";
	cout << "5. Wartosc bezwgledna\n";
	cout << "6. Pierwiastek kwadratowy\n";
	cout << "7. Potegowanie\n";
	cin >> wybor;
	switch (wybor)
	{
		case '1':
			cout << "Podaj wartosc a: ";
			cin >> u;
			cout << "Podaj wartosc b: ";
			cin >> k;
			cout << "\n";
			x = suma(u, k);
			cout << "Wartosc sumy a i b jest rowna: " << x<<"\n";
			break;
		case '2':
			cout <<"Podaj wartosc a: ";
			cin >> u;
			cout << "Podaj wartosc b: ";
			cin >> k;
			cout << "\n";
			x = roznica(u, k);
			cout << "Wartosc roznicy a i b jest rowna: " << x << "\n";
			break;
		case '3':
			cout << "Podaj wartosc a: ";
			cin >> u;
			cout << "Podaj wartosc b: ";
			cin >> k;
			cout << "\n";
			x = iloczyn(u, k);
			cout << "Wartosc iloczynu a i b jest rowny: " << x << "\n";
			break;
		case '4':
			cout << "Podaj wartosc a: ";
			cin >> u;
			cout << "Podaj wartosc b: ";
			cin >> k;
			cout << "\n";
			for (int i = 0; i < 2; i++) {
				y[i] = 0;
				y[i] = iloraz(u, k, i);
			}
			if (y[1] == 1) {
				cout<<"Nieprawidlowe dane";
			}
			else {
				cout << "Wartosc ilorazu a i b jest rowny: " << y[0] << "\n";
			}
			break;
		case '5':
			cout << "Podaj wartosc a: ";
			cin >> u;
			cout << "\n";
			cout << "Wartosc bezwgledna a: " <<wartosc_bezwgledna(u)<< "\n";
			break;
		case '6':
			cout << "Podaj wartosc a: ";
			cin >> u;
			cout << "\n";
			for (int i = 0; i < 2; i++) {
				y[i] = 0;
				y[i] = pierwiastek_kwadratowy(u, i);
			}
			if (y[1] == 1) {
				cout << "Nieprawidlowe dane";
			}
			else {
				cout << "Wartosc pierwiatka kwadratowego a: " << y[0] << "\n";
			}
			break;
		case '7':
			cout << "Podaj wartosc podstawy a: ";
			cin >> u;
			cout << "Podaj wartosc wykladnika n: ";
			cin >> k;
			cout << "\n";
			for (int i = 0; i < 2; i++) {
				y[i] = 0;
				y[i] = potega(u,k,i);
			}
			if (y[1] == 1) {
				cout << "Nieprawidlowe dane";
			}
			else {
				cout << "Wartosc potegi " << u << " do " << k << " jest rowna: " <<y[0];
			}
			break;
		default:
			cout << "Nie ma takiej opcji\n";

	}
	getchar(); getchar();
}