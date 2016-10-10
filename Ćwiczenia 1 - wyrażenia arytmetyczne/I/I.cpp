#include<iostream>
using namespace std;
int main(){
	double a, b, w;
	cout << "Podaj a i b:"<<"\n";
	cin >> a >> b;
	w = (pow(pow(a,2) - pow(b, 2), 4))*(pow((pow(a,3)+pow(b, 3)),6));
	cout << "1.w=" << w << "\n";
	w = sqrt(pow(pow(a,2)+pow(b,2),3));
	cout << "2.w=" << w << "\n";
	w = 1 / 231.0*(pow(a, 2)+a*b+pow(b,2));
	cout << "3.w=" << w << "\n";
	w = 7 / 8.0*(a + b*(1 + a*(a + b)) + a*b);
	cout << "4.w=" << w << "\n";
	w = (((1 - pow(a, 2)) / (1 + pow(a, 2))))*sqrt(4 + pow(b, 2));
	cout << "5.w=" << w << "\n";
	w = ((4 + pow(b, 2)) / (4 - pow(b, 2)))*((1 + pow(a, 2)) / (1 - pow(a, 2)));
	cout << "6.w=" << w << "\n";
	system("PAUSE");
}