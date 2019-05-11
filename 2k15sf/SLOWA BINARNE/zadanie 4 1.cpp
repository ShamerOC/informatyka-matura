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
	int z = 0, j = 0;
	int len, wynik = 0;
	while (!plik.eof()) {
		plik >> a;
		z = 0;
		j = 0;
		len = a.length();
		for (int i = 0; i < len; i++) {
			if (a[i] == '0') {
				z++;
			} else {
				j++;
			}
		}
		if (z > j) {
			wynik++;
		}
	}
	cout << wynik;
	return 0;
}
