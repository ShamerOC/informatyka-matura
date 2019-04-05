#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	
	ifstream plik("liczby.txt");
	
	if(!plik) {
		cout << "blad wczytywania pliku";
		return 0;
	}
	
	string a;
	int zero, jeden, ilosc = 0;
	
	while(!plik.eof()) {
		plik >> a;
		zero = 0;
		jeden = 0;
		
		for(int i = 0; i < a.length(); i++) {
			if (a[i] == '0') zero++;
			else if (a[i] == '1') jeden++;
		}
		
		if(zero > jeden) ilosc++;
	}
	
	cout<<ilosc;
	return 0;
}
