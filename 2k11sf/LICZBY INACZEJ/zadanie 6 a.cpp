#include <iostream>
#include <fstream>

using namespace std;

int bin_to_dec(string a) {
	int len = a.length();
	int mnoznik = 1;
	int wynik = 0;
	for (int i = len - 1; i >=0; i--) {
		wynik += ((int)a[i] - 48) * mnoznik;
		mnoznik *= 2;
	}
	
	return wynik;
}

int main() {
	ifstream plik("liczby.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	
	string a;
	int wynik = 0;
	
	while (!plik.eof()) {
		plik >> a;
		if (bin_to_dec(a) % 2 == 0) {
			wynik++;
		}	
	}
	
	cout << wynik;
	return 0;
}
