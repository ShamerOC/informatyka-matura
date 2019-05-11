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

string dec_to_bin(int a) {
	string wynik = "";
	while (a != 0) {
		if (a % 2 == 1) {
			wynik += "1";
		} else {
			wynik += "0";
		}
		a /= 2;
	}
	string rev = "";
	for (int i = wynik.length() - 1; i >= 0; i--) {
		rev += wynik[i];
	}
	return rev;
}

int main() {
	ifstream plik("liczby.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	
	string a;
	int len, sumab = 0, counter = 0;
	
	while (!plik.eof()) {
		plik >> a;
		len = a.length();
		if (len == 9) {
			sumab += bin_to_dec(a);
			counter++;
		}
	}
	cout << counter << " " << dec_to_bin(sumab);
	return 0;
}
