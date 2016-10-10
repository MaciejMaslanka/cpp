#include<iostream>

using namespace std;

int main() {
	char oper;
	short dobrze = 1;
	double arg1, arg2, wynik;
		cout<<"KALKULATOR - Napisz wyrazenie:  ";
		cin >> arg1 >> oper >> arg2;
		if (oper == '+') wynik = arg1 + arg2;
		else if (oper == '-') wynik = arg1 - arg2;
		else if (oper == '*') wynik = arg1 * arg2;
		else if (oper == '/')
			if (arg2 != 0) {
				wynik = arg1 / arg2;
			}
			else {
				dobrze = 0;
				cout << "Nie dzieli sie przez zero!!!\n";
			}
		if (dobrze)
			cout<<"\nWynik obliczen: "<<wynik<<"\n";
		system("PAUSE");
}