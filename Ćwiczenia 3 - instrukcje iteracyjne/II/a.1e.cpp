#include<iostream>
using namespace std;
int main()
{
	int w,o=0;
	double x;
	cin >> x>>w;
	while (x>w) {
		x = x / 3;
		o++;
	}
	cout << o<<"\n";
	system("pause");
	return 0;
}