#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	ifstream plik("liczby.txt");
	
	if(!plik) {
		cout<<"Blad!";
		return 0;
	}
	
	string a;
	int z, j, m = 1, dwa = 0, osiem = 0;
	long int wynik = 0;
	
	while(!plik.eof()) {
		wynik = 0;
		m = 1;
		
		plik >> a;
		for(int i = a.length(); i > 0; i--) {
			if(a[i] == '0') {
				m *= 2;
			}
			else if(a[i] == '1') {
				wynik += m;
				m *= 2;
			}
		}
		if(wynik % 2 == 0) {
			if(wynik % 8 == 0) {
				osiem++;
			}
			dwa++;
		}
		

	}
	cout<<"Dwa: "<<dwa<<" Osiem: "<<osiem;
		
	return 0;
}
