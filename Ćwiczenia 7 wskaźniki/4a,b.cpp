#include<iostream>
#include <ctime>
using namespace std;
float zwieksz(float x, float d);
float zmiejsz(float x, float d);
void dzialanie(float x, float y) {
	
}
int main() {
	int i;
	cout << "Podaj wartosc x, podaj wartosc d\n";
	float x,d;
	cin >> x >> d;
	float(*wskfun)(float x, float d);
	cout << "Podaj nr funkcji 1:(zwieksz x o d) 2:(zmiejsz x o d)";
	cin>>i;
	switch (i) {
	case 1: wskfun = zwieksz; break;
	case 2: wskfun = zmiejsz; break;
	default: wskfun = NULL; break;
	}
	(*wskfun)(x, d);
	getchar();
	getchar();
	return(0);
}
float zwieksz(float x, float d) {
	x += d;
	cout << x;
	return 1;
}
float zmiejsz(float x, float d) {
	x -= d;
	cout << x;
	return 1;
}