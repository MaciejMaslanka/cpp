#include<iostream>
#include<cmath>
#include <cstdlib>
using namespace std;
int main(void) {
	int y = 10;
	double x, w;

	x = 10.0;

	w = 3 / 4 * x;
	cout << "1.w=" << w << "\n";//cos nie dziala, powinno byc: w = 3.0/4*x 

	w = 3 * x / 4;
	cout << "2.w=" << w << "\n";//dziala

	w = 3.0 / 2 * x;
	cout << "3.w=" << w << "\n";//dziala

	w = 3 / y*x;
	cout << "4.w=" << w << "\n";//cos nie dziala, powinno byc: w = 3.0/y*x

	w = 3 * y / x;
	cout << "5.w=" << w << "\n";//dziala

	w = 3 / float(y)*x;
	cout << "6.w=" << w << "\n";//niepotrzebne przypisanie zmiennej float wartoœci y (y mialo przypisana zmienna double), powinno byc w = 3.0 / float(y)*x

	cout << "\n"; system("pause");
}
