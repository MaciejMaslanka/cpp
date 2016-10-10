#include<iostream>
using namespace std;
int main()
//wyznaczyc liczbe cyfr liczby całkowitej;
{
	int a, b;

	cin >> a;
	b = 0;
	while (a != 0)
	{
		a /= 10;
		b++;
	}


	cout << b<<"\n";
	system("PAUSE");
}