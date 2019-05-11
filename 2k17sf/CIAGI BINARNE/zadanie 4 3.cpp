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
	string a, maxb;
	int maxd = 0, d;
	
	while (!plik.eof()) {
		plik >> a;
		d = bin_to_dec(a);
		if (d < 65535 && d > 0) {
			if (d > maxd) {
				maxd = d;
				maxb = a;
			}
		}
	}
	
	cout << maxb << " " << maxd;
	
	return 0;
}
