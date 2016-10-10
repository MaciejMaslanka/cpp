#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int i=0,tab[100],d,g,min,max=tab[0],imin=0,imax=0,n=100,o=0,io,p=0,rosnacy=1,malejacy=1,q,s=0,f=0,m=0,y=tab[0],v=1;
	double x = 1, u = 0, t = 0;
	cout << "Wpisz zakres generowanych wartosci a i b: ";
	cin >> d >> g;
	cout << "Podaj wartosc szukana: ";
	cin >> q;
	for (i = 0; i < n; i++) {
		tab[i] = d + rand() % (g - d + 1);
	}
	for (i = 0; i < n; i++) {
		f++;
		if (tab[i] == q) {
			s = 1;
			break;
		}
	}
	min = tab[0];
	for (i = 1; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i];
			imin = i;
		}
	}
	for (i = 1; i < n; i++) {
		if (tab[i] > max) {
			max = tab[i];
			imax = i;
		}
	}
	for (i = 0; i < n; i++) {
		u += tab[i];
		t = u / x;
		x++;
	}
	for (i = 0; i < n; i++) {
		if (tab[i] % 2==0) {
		o = tab[i];
		io = i;
		p = 1;
		break;
		}
	}
	for (i = 1; i < n; i++) {
		if (tab[i] <= tab[i - 1]) {
			rosnacy = 0;
			break;
		}
	}
	for (i = 1; i < n; i++) {
		if (tab[i] >= tab[i - 1]) {
			malejacy = 0;
			break;
		}
	}
	for (i = 0; i < n; i++) {
		if (tab[i] % 2 != 0) {
			m++;
		}
	}
	for (i = 1; i < n; i++) {
		if (tab[i] < 0&&abs(tab[i])<abs(y)) {
			y = tab[i];
			v = 0;
		}
	}
	for (i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << "\nElement o najnizszej wartosci " <<min << " znajduje sie na pozycji o indeksie " << imin << "\n";
	cout << "Element o najwyzszej wartosci " << max << " znajduje sie na pozycji o indeksie " << imax << "\n";
	cout << "Srednia arytmetyczna wartosci wyrazow ciagu jest rowna " << t<<"\n";
	if (p = 1) {
		cout << "Wyraz o wartosc parzystej " << o << " znajduje sie na pozycji o indeksie " << io << "\n";
	}
	else {
		cout <<"Wyraz o wartosci parzystej nie wystepuje\n";
	}
	if (s==1) {
		cout << "Element o szukanej wartosci zostal znaleziony na pozycji o indeksie " << f<<"\n";
	}
	if (s==0) {
		cout << "Element o szukanej wartosci nie zostal znaleziony"<<"\n";
	}
	if (rosnacy == 1) {
		cout << "\nCiag jest rosnacy\n";
	}
	if(malejacy ==1){
		cout << "\nCiag jest malejacy";
	}
	if(rosnacy==0 && malejacy ==0){
		cout << "Ciag nie jest ani rosnacy, ani malejacy";
	}
	if (m > 0) {
		cout << "\nLiczba nieparzystych wyrazow jest rowna " << m;
	}
	if (v == 0) {
		cout << "\nElement o najwyzszej wartosci ujemnej jest rowny " << y;
	}
	if (v == 1) {
		cout << "\nNie ma elementow ujemnych";
	}
	getchar(); getchar();
	return 0;
}