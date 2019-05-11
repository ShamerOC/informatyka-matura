#include <iostream>
#include <fstream>

using namespace std;

int czy_znajduje(string a, string b) {
	int lena = a.length();
	int lenb = b.length();
	int score = 0;
	if (lena > lenb) {
		return 0;
	}
	
	if (a == b) {
		return 1;
	}
	int aa;
	
	for (int i = 0; i < lenb; i++) {
		aa = 0;
		if (b[i] == a[aa]) {
			score = 0;
			for (int j = 1; j < lena; j++) {
				if (b[i + j] == a[j]) {
					score++;
				}
				if (score == lena - 1) {
					return 1;
				}
				return 0;
			}
		}
	}
	return 0;
}

int main() {
	ifstream plik("slowa.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	
	string a, b;
	int wynik = 0, c;
	
	while (!plik.eof()) {
		plik >> a;
		plik >> b;
		wynik += czy_znajduje(a, b);
	}
	
	cout << wynik;
	return 0;
}
