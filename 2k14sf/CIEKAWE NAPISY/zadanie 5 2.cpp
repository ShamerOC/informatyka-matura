#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream napisy("NAPIS.TXT");
	
	if (!napisy) {
		cout << "Blad!";
		return 0;
	}
	
	string a;
	int len, suma, poprzedni, ilosc, wynik = 0;
	
	while (!napisy.eof()) {
		ilosc = 0;
		suma = 0;
		napisy >> a;
		len = a.length();
		poprzedni = (int)a[0];
		
		for(int i = 1; i < len; i++) {
			if ((int)a[i] > poprzedni) {
				ilosc++;
				poprzedni = (int)a[i];
			}			
		}
		if (ilosc == len - 1) {
			cout << a << endl;
		}
		
	}
	cout << wynik;
	return 0;
}
