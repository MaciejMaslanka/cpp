#include<iostream>
#include<string>
using namespace std;
class Zamowienie {
	string nazwa;
	float cena;
	int liczba_sztuk;
	string data_zakupu;
	int d_miesiac;
public:
	void zapisz_dane(string n, float c, int lb, string data, int miesiac) {
		nazwa = n;
		cena = c;
		liczba_sztuk= lb;
		data_zakupu = data;
		d_miesiac = miesiac;
	}
	void wyswietl_dane() {
		cout << "\ndane: " << nazwa << " " << cena << " " << liczba_sztuk<<" "<<data_zakupu<<" "<<d_miesiac;
	}
	float podaj_koszt() {
		return liczba_sztuk*cena;
	}
	string podaj_nazwe_produktu() {
		return nazwa;
	}
	int podaj_liczbe_sztuk() {
		return liczba_sztuk;
	}
	string podaj_date_zakupu() {
		return data_zakupu;
	}
	int podaj_miesiac() {
		return d_miesiac;
	}
};
struct Pomocn {
	string nazwa;
	int ilosc;
};
int main() {
	int n;
	cout << "liczba zamowien: "; cin >> n;
	Zamowienie*tz =new Zamowienie[n];
	string nazwa_prod; float cena_prod; int ilosc_prod; string data_zakupu;int podaj_miesiac;
	for (int i = 0; i < n; i++){
		cout << "\npodaj nazwe, cene, ilosc, date zakupu i miesiac: "; cin >> nazwa_prod >> cena_prod >> ilosc_prod >> data_zakupu>>podaj_miesiac;
		tz[i].zapisz_dane(nazwa_prod, cena_prod, ilosc_prod, data_zakupu,podaj_miesiac);
	}
	for (int i = 0; i < n; i++)
		tz[i].wyswietl_dane();
	cout << "\n\nsumaryczna wartosc zamowien dla wskazanego produktu: ";
	string nazwa;
	float sumaryczna_wartosc = 0;
	cout << "\npodaj nazwe produktu: "; cin >> nazwa;
	for (int i = 0; i < n; i++){
		if (tz[i].podaj_nazwe_produktu() == nazwa)
			sumaryczna_wartosc += tz[i].podaj_koszt();
		}
	cout << "sumaryczna wartosc = " << sumaryczna_wartosc;
	int miesiac;
	cout << "\n\nPodaj miesiac: "; cin >> miesiac;
	sumaryczna_wartosc = 0;
	for (int i = 0; i < n; i++) {
		if (tz[i].podaj_miesiac() == miesiac)
			sumaryczna_wartosc += tz[i].podaj_koszt();
	}
	cout << "sumaryczna wartosc = " << sumaryczna_wartosc;
	cout << "\n\nprodukt zakupiony w najwiekszej ilosci";
	Pomocn*tpomocn = new Pomocn[n];
	for (int i = 0; i < n; i++) {
		tpomocn[i].nazwa = "";tpomocn[i].ilosc = 0;
	}
	int index = 0, ok;
	for (int i = 0; i < n; i++) {
		nazwa = tz[i].podaj_nazwe_produktu();
		ok = 0;
		for (int j = index - 1; j >= 0; j--) {
			if (tpomocn[j].nazwa == nazwa) {
				tpomocn[j].ilosc += tz[i].podaj_liczbe_sztuk();
				ok = 1;
				break;
			}
		}
		if (!ok) {
			tpomocn[index].nazwa = nazwa;
			tpomocn[index].ilosc = tz[i].podaj_liczbe_sztuk();
			index++;
		}
	}
	cout << "\ntablica pomocnicza: ";
	for (int i = 0; i < index; i++)
		cout << tpomocn[i].nazwa << ": " << tpomocn[i].ilosc << ", ";
	int ilosc_max = 0;
	nazwa = "";
	for (int i = 0; i < index;i++)
		if (tpomocn[i].ilosc > ilosc_max) {
			ilosc_max = tpomocn[i].ilosc;
			nazwa = tpomocn[i].nazwa;
		}
	cout << "\nprodukt zapisano w najwiekszej ilosc: " << nazwa << ": " << ilosc_max;
	cout << "\n\n"; system("pause");

}