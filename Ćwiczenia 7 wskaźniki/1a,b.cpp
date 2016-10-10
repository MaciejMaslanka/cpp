#include<iostream>
using namespace std;
int main() {
	int* wsk;
	int* wsk1;
	int* wsk2;
	int a, b, c;
	wsk = &a;
	wsk1 = &b;
	wsk2 = &c;
	cout << wsk << "\n" << wsk1 << "\n" << wsk2;
	a = 12, b = 18, c = 26;
	*wsk = 2;
	*wsk1 = 59;
	*wsk2 = 147;
	cout << "\n" << "\n";
	cout << a << "\n" << b << "\n" << c;
	getchar();
	return(0);
}
