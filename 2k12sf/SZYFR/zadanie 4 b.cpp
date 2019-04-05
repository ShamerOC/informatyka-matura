 #include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {	
	ifstream plik("sz.txt");
	ifstream klucze("klucze2.txt");
	ofstream off("wynik4b.txt");
	
	if (!plik || !klucze) {
		cout << "Blad!";
		return 0;
	}
	
	vector<string> kluczee;
	
	string a;
	
	while (!klucze.eof()) {
		klucze >> a;
		kluczee.push_back(a);
	}
	

	int j, nr = 0;
	string tekst, klucz;
	
	while(!plik.eof()) {
		j = 0;
		plik >> tekst;
		klucz = kluczee[nr];
		int lent = tekst.length();
		int lenk = klucz.length();
	 	for(int i = 0; i < lent; i++) {
			if (j >= lenk) j = 0;
			char a = (int)tekst[i] - ((int)klucz[j] - 64);
			while((int)a < 65) {
				a = (int)a + 26;
			}
			off << a;
			j++;
		}
		off << endl;
		nr++;
	}

	return 0;
}
