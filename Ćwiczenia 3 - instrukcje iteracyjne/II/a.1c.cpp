#include<iostream>
using namespace std;
int main()
{
	const int N = 1000;
	int x,i,raz[N],p;
	cin >> x;
	for (i = 0; i < x; i++) {
		cin >> raz[i];
	}
	double max = -1000;
	for (p = 0; p < x; p++) {
		if (raz[p]>max) {
			max = raz[p];
		}
	}
	cout << max<<"\n";
	system("pause");
	return 0;
}