#include<iostream>
using namespace std;
int main()
{
	int n,i,tab[1000];
	cin >> n;
	i = 0;
	for (int i=0;i<n; i++) {
		cin >>tab[i];
	}
	for (int i = 0; i < n; i++) {
		if (tab[i] % 2 == 0) {
			cout << "parzysta\n";
		}
		else {
			cout << "nieparzysta\n";
		}
	}
	system("pause");
	return 0;
}