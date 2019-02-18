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
	int z, j, wynik = 0;
	
	while(!plik.eof()) {
		z = 0;
		j = 0;
		plik >> a;
		for(int i = 0; i < a.length(); i++) {
			if(a[i] == '0') z++;
			else if(a[i] == '1') j++;
		}
		if(z > j) wynik++;
	}
	cout<<wynik;
		
	return 0;
}
