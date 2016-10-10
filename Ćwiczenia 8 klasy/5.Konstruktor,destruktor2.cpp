#include<iostream>
#include<string>
using namespace std;
class Wielokat {
private:
	int n;
	int *w;
	int *c;
public:
	Wielokat(int w) {
		this->w = new int[n];
	}
	~Wielokat() {
		delete w; 
	}
	Wielokat(const Wielokat&)
	{

	}
};
int main() {
	Wielokat z1;
	getchar(); getchar();
}

/*#include<iostream>
#include<string>
using namespace std;
class Wielokat {
private:
	int n;
	int *w;
public:
	Wielokat::Wielokat(const Wielokat&x) {
		w = new int[n = x.n];
		for (int i = 0; i < n; i++)
			w[i] = x.w[i];
	}
	~Wielokat()
	{
		delete w; 
	}
	Wielokat(const Wielokat&)
	{
		
	}
};
int main() {
	Wielokat z1;
	getchar(); getchar();
}
*/

