#include <iostream>
using namespace std;
int main(){
//obliczyc sume liczb od 1 do ";
	double n,i,d;
	cin >> n;
	d = 0;
	for ( i = 1; i <= n; i++) {
		d=d+i;
	}
	cout << d<<"\n";
	system("PAUSE");
}