#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ifstream plik ("dane.txt");
	
	
	string a, b;
	int x, d, wynik = 0;;
	while (!plik.eof()) {
		plik >> a;
		x = 0;
		d = 0;
		for (int i = a.length() - 1; i >= 0; i--) {
			if (a[i] == a[x]) {
				d++;
			}
			x++;
		}
		if (d == a.length()) {
			wynik++;
		} 

	}
	
	cout << endl << wynik;
	return 0;
}
