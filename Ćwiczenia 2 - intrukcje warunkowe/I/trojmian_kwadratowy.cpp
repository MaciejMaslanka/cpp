#include<iostream>
using namespace std;

int main()
{
	float a, c, b, d, e, f;
	char i;
	i = 'i';
	cout << "Podaj a :";
	cin >> a;
		while (a == 0) {
			cout << "blad";
			cin.clear();
			cin >> a;
		}
	
	cout << "Podaj b :";
	cin >> b;
	cout << "Podaj c :";
	cin >> c;
	d = pow(b, 2) - 4 * a*c;
	if (d == 0) {
		e = -b / (2 * a);
		cout << "x1 jest rowny : " << e << endl;

	}

	else if (d > 0) {

		d = sqrt(d);
		e = (-b - d) / (2 * a);
		f = (-b + d) / (2 * a);
		cout << "x1 jest rowny : " << e << endl;
		cout << "x2 jest rowny : " << f << endl;

	}
	else {
		d = -d;
		d = sqrt(d);
		e = (-b - d) / (2 * a);
		f = (-b + d) / (2 * a);
		cout << " x1 jest rowny : " << e << endl;
		cout << "x2 jest rowny : " << f << "i" << endl;


	}
	system("pause");
	return 0;
}
