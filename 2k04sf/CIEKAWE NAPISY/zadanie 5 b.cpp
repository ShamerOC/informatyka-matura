#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
	ifstream plik("NAPIS.TXT");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	string a;
	int suma, wynik = 0, b;
	
	while (!plik.eof()) {
		plik >> a;
		b = 0;
		while(a[b] < a[b + 1] && b < a.length()) {
			b++;
		}
		if (b == a.length() - 1) {
			cout << a << endl;
			wynik ++;
		}
	}
//	cout << "  " << wynik;
	return 0;
}
