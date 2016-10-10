#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{

	int *tab = new int[500000];
	int n, i, min,max;
	do
	{
		cin >> n;
		cin.clear();
	} while (n<1);
	i = 0;
	for (int i=0;i<n; i++) {
		cin >>tab[i];
	}
	max = tab[0];
	for (int i = 0; i < n; i++) {
		if (tab[i] > max) {
			max = tab[i];
		}
	}
	min = tab[0];
	for (int i = 0; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
	}
	cout << max - min;
	getchar(); getchar();
}