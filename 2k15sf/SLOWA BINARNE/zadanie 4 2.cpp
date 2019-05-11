#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream plik("slowa.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	
	string a;
	char b, wcz;
	int len, wynik = 0, blok;
	
	while (!plik.eof()) {
		plik >> a;
		blok = 1;
		cout << a;
		for(int i = 1; i < a.length(); i++) {
			wcz = a[i - 1];
			b = a[i];
			if (b != wcz) {
				blok++;
			}
		}
		if (blok == 2 && b == '1') {
			wynik++;
		}
	}
	cout << wynik;
	return 0;
}
