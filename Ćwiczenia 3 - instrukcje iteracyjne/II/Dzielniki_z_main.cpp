#include<iostream>
using namespace std;
int main()
{
	int x,i;
	cin >> x;
	i = 0;
	for (int w=1;w<=x; w++) {
		if (x%w == 0) {
			cout << w<<"\n";
		}
	}
	system("pause");
	return 0;
}