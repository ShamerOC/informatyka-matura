#include <iostream>
#include <fstream>

using namespace std;
// 0: 48
int bin_to_dec(string a) {
	int len = a.length();
	int mnoznik = 1;
	int wynik = 0;
	for(int i = len - 1; i >= 0; i--) {
		wynik += (a[i] - 48) * mnoznik;
		mnoznik *= 2;
	}
	return wynik;
}

int main() {
	
	ifstream plik("binarne.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	string a, c;
	int len, pol, b, wynik = 0, min = 1000;
	while (!plik.eof()) {
		plik >> a;
		len = a.length();
		b = 0;
		do {
			c = a.substr(b, 4);
			if (bin_to_dec(c) > 9) {
				break;
			}
			b += 4;	
		} while (b + 4 < len );
		if (b == len - 4) {
			
		} else {
			wynik++;
			if (len < min) {
				min = len;
			}
		}
	}
	cout << wynik << " len: " << min;
	
	return 0;
}
