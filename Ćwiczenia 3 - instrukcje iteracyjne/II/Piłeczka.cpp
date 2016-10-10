#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{

	int *x = new int[1000000], *w=new int[1000000],n,a,b,o;
	do
	{
		cin >> n;
		cin.clear();
	} while (n<1);
	for (int i = 0; i < n; i++) {
		do
		{
			cin >> x[i]>>w[i];
			cin.clear();
		} while (x[i] < 1 || x[i]>1000000000 || w[i] < 0 || w[i]>1000000000);
	}
	for (int i = 0; i < n; i++) {
		a = x[i];
		b = w[i];
		o = 0;
		while(a<b){
			a = a * 2;
			o++;
		}
		if (a >= b) {
			cout << o;
		}
		cout << "\n";
	}

	getchar(); getchar();
}