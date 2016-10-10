#include <iostream>
using namespace std;
int main()

{

	int n;
	cout << "Dzielniki liczby n: \n";
	cin >> n;
	if (n % 2 == 0) 
		cout << "2 ";
	
	if (n%3==0)
		cout << "3 ";
	if (n % 5 == 0) 
		cout << "5 ";
	
	if (n % 7 == 0) 
		cout << "7 ";
	system("PAUSE");
}