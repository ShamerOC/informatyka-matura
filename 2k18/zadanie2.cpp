#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	ifstream plik("sygnaly.txt");
	
	if(!plik) {
		cout<<"Blad";
		return 0;
	}
	int ilosc, b = 0, max = 0, powtorzenie, wynik, tab[26], ile;
	string a, maxl;
	
	while(!plik.eof()) {
		for(int i = 0; i <= 25; i++) tab[i] = 0;
		powtorzenie = 0;
		ile = 0;
		plik >> a;
		ilosc = a.length();
		for(int i = 0; i < a.length(); i++) {
			tab[int(a[i]) - 65]++;
		}
		for(int i = 0; i <= 25; i++) {
			if(tab[i] > 1) {
				ile += tab[i] - 1;
			}
		}
		wynik = ilosc - ile;
		if(wynik > max) {
			max = wynik;
			maxl = a;
		}
	}
	
	cout<<maxl<<" "<<max;
	return 0;
}
