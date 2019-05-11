#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	cout << "siema";
	ifstream plik("dane_6_2.txt");
	
	if (!plik) {
		cout << "Blad podczas otwierania pliku";
		return 0;
	}
	
	string a;

	int liczba, k = 107;
	
	while (!plik.eof()) {
		plik >> a;
		cout << "fsa" << a << endl;
	}
	
	return 0;
}
