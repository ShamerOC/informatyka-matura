#include <iostream>
#include <fstream>

using namespace std;

int czy_pierwsza(int a) {
	
	if (a == 2 || a <= 0) {
		return false;
	}
	
	int pol = a / 2;
	
	for(int i = 2; i < pol; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
	
}

int main() {
	ifstream napisy("NAPIS.TXT");
	
	if (!napisy) {
		cout << "Blad!";
		return 0;
	}
	
	string a;
	int len, suma, ilosc = 0;
	
	while (!napisy.eof()) {
		suma = 0;
		napisy >> a;
		len = a.length();
		
		for(int i = 0; i < len; i++) {
			suma += (int)a[i];
		}
		if (czy_pierwsza(suma)) {
			ilosc++;
		}
		
	}
	cout << ilosc;
	return 0;
}
