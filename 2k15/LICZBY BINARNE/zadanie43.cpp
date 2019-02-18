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
	int z, j, dwa = 0, osiem = 0, cdf = 0, mina, maxa;
	long int wynik = 0, m = 1, max = 0, min = 1000;
	
	while(!plik.eof()) {
		wynik = 0;
		m = 1;
		cdf++;
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
		
		if(wynik > max) {
			max = wynik;
			maxa = cdf;
		} 
		if(wynik < min) {
			min = wynik;
			mina = cdf;
		}
	}
	cout<<"max: "<<max<<" min: "<<min;
		
	return 0;
}
