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
	int len, wynik = 0;
	
	while (!plik.eof()) {
		plik >> a;
		len = a.length();
		if (a[len - 1] == 'A') {
			wynik++;
		}
	}
	
	cout << wynik;
	return 0;
}
