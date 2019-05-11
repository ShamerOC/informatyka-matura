#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

bool czy_pierwsza(int s) {
	if (s == 1) {
		return true;
	}
	for(int i = 2; i <= sqrt(s); i++) {
		if (s % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ifstream plik("NAPIS.TXT");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	string a;
	int suma, wynik = 0;
	
	while (!plik.eof()) {
		plik >> a;
		suma = 0;
		for (int i = 0; i < a.length(); i++) {
			suma += (int)a[i];
		}
		if (czy_pierwsza(suma)) {
			wynik++;
		}
//		cout << a << " " << suma << " " << czy_pierwsza(suma) << " " << wynik << endl;
	}
	cout << "  " << wynik;
	return 0;
}
