#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ifstream plik ("dane.txt");
	
	
	string a, b;
	int x, d, wynik = 0;;
	while (!plik.eof()) {
		plik >> a;
		plik >> b;
		x = 0;
		if (a.length() >= b.length()) {
			for (int i = 0 ; i < a.length() - b.length() + 1; i++) {
				d = 0;
				for (int j = 0; j < b.length(); j++) {
					if (a[i + j] == b[j]) {
						d++;
					}
				}
				if (d == b.length()) {
					wynik ++;
					cout << "A: " << a << " B: " << b << endl;
					break;
				}
			}
		}
	}

	
	cout << endl << wynik;
	return 0;
}
