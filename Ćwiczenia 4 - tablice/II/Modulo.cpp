#include<iostream>
using namespace std;
int main() {
	int tab[15], n=15, x, a[15], s=0,nie=0;
	for (int i = 0; i < n; i++) {
		do{
			cin >> tab[i];
			cin.clear();
		}while (tab[i] < 1 || tab[i]>10000);
	}
	for (int i = 0; i < n;i++){
		x = tab[i] % 37;
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				nie = 1;
				break;
			}
		}
		if (nie==0) {
			a[i] = x;
			s++;
		}
		nie = 0;
		
	}
	cout <<"\n"<<s;
	getchar(); getchar();
}