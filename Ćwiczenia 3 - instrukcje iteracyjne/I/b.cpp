#include <iostream>
using namespace std;
int main(){
//obliczyc wartosc silni liczby ";
	long double n,d,e;
	cin >> n;
	d = 1;
	for (int i = 1; i <= n; i++) {
		d=d*i;
	}
	cout << d<<"\n";
	system("PAUSE");
}