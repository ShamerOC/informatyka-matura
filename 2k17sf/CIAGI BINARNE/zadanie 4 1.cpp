#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ifstream plik("binarne.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	string a, maxs;
	int len, pol, b, wynik = 0, maxi = 0;
	
	while (!plik.eof()) {
		plik >> a;
		b = 0;
		len = a.length();
		pol = len / 2;
		for(int i = 0; i < pol; i++) {
			if (a[i] == a[pol + i]) {
				b++;
			}
		}
		if (b == pol) {
			wynik++;
			if (len > maxi) {
				maxi = len;
				maxs = a;
			}
		}
	}
	cout << wynik << " maxs: " << maxs << " maxi: " << maxi;
	
	return 0;
}
