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
	
	string a, maxb;
	int max = 0, b;
	
	while (!plik.eof()) {
		plik >> a;
		b = bin_to_dec(a);
		if (b > max) {
			max = b;
			maxb = a;
		}
	}
	
	cout << max << " " << maxb;
	return 0;
}
