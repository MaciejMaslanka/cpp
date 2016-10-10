#include <iostream>
using namespace std;
int main() {

	double x, y, w, s, g, k, j, i;
	cin >> x >> y;
	w = x + y;
	s = x - y;
	g = x*y;
	k = x / y;
	j = y - x;
	i = y / x;
	if (w > s && w > g && w > k && w>j && w>i) {
		if (y < 0) {
			cout << x << "+" <<"("<<y <<")"<< w << " = " << "\n";
		}
		else {
			cout << x << "+" << y << " = " <<w<< "\n";
		}
	}
	if (s > w && s > g && s > k && s>j && s>i) {
		if (y < 0) {
			cout << x << "-" <<"("<< y <<")"<< " = " << s << "\n";
		}
		else {
			cout << x << "-" << y << " = " << s << "\n";
		}
	}
	if (g > s && g > w && g > k && g>j && g>i) {
		if (y < 0) {
			cout << x << "*" <<"("<< y <<")"<< " = " << g << "\n";
		}
		else {
			cout << x << "*" <<y<< " = " << g << "\n";
		}
	}
	if (k > s && k > g && k > w && k > j && k > i) {
		if (y < 0) {
			cout << x << "/" << "(" << y << ")" << " = " << k << "\n";
		}
		else {
			cout << x << "/" << y << " = " << k << "\n";
		}
	}
	if (j > s && j > g && j > w && j > i && j > k) {
		if (x < 0) {
			cout << x << "-" <<"("<< y <<")"<< " = " << j << "\n";
		}
		else {
			cout << x << "-" << y << " = " << j << "\n";
		}
	}
	if (i > s && i > g && i > w && i > j && i > k) {
		if (x < 0) {
			cout << y << "/" << "(" << x << ")" << " = " << i << "\n";
		}
		else {
			cout << y << "/" << x << " = " << i << "\n";
		}
	}
	system("PAUSE");
}