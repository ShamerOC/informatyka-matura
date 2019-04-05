#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int zmien(string a) {
	int len = a.length();
	int wynik = 0;
	int liczba;
	for(int i = 0; i < len; i++) {
		liczba = (int)a[i] - 48;
		wynik += liczba * pow(8, len - (i + 1));
	}
	return wynik;
}

int main() {
	
	ifstream plik("dane.txt");
	
	if (!plik) {
		cout << "Blad wczytywania";
		return 0;
	}
	
	string a;
	
	
	
	while(!plik.eof()) {
		plik >> a;
		int liczba = zmien(a);
		
		cout << str << " ";
		cout << liczba << endl;
	}
	
	return 0;
}
