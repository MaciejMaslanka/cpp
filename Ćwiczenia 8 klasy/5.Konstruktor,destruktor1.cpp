#include <cmath>
#define M_PI 3.141592653589793238476
#include <iostream>
using namespace std;
class Stozek {
private:
	double h, r, l;
	double oblicz_tworzaca() {
		return sqrt(pow(h, 2) + pow(r, 2));
	}
public:
	Stozek() {
		h = 0;
		r = 0;
		l = 0;
	}
	Stozek(double h,double r) {
		this->l = oblicz_tworzaca();
	}
	double oblicz_pole_calkowite(double r,double l) {
		return M_PI*r*(r + l);
	}
	double oblicz_objetosc(double r, double h) {
		return (1.0 / 3.0)*M_PI*pow(r, 2)*h;
	}

};
int main() {
	double h;
	double r;
	double l;
	Stozek z1;
	cin >> r >> h>>l;
	cout <<z1.oblicz_objetosc(r,h);
	cout <<"\n";
	cout <<z1.oblicz_pole_calkowite(r, l);
	getchar(); getchar();
	return(0);
}