#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	ifstream plik("dane_6_1.txt");
	ofstream zapisz("odp_6_1.txt");
	
	if (!plik) {
		cout << "Blad podczas otwierania pliku";
		return 0;
	}
	
	string a;

	int liczba, k = 107;
	
	while (!plik.eof()) {
		plik >> a;
		int ilosc = a.length();
		for (int i = 0; i < ilosc; i++) {
			liczba = (int)a[i];
			liczba += k;
			while (liczba > 90) {
				liczba = liczba - 90 + 64;
			}
			zapisz << (char)liczba;
		}
		zapisz << endl;
		
	}
	
	return 0;
}
