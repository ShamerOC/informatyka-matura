#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	
	ifstream plik("dane.txt");
	
	if (!plik) {
		cout << "Blad wczytywania";
		return 0;
	}
	
	string a;
	int poprzednia, liczba, counter = 0, wynik = 0, max = 0, min = 1000;
	string maxs, mins;
	
	
	while(!plik.eof()) {
		plik >> a;
		int len = a.length();
		counter = 0;
		int poprzednia = (int)a[0] - 48;
//		cout << poprzednia;
		for(int i = 1; i < len; i++) {
			int liczba = (int)a[i] - 48;
			if (liczba < poprzednia) {
				break;
			}
//			cout << liczba;
			poprzednia = liczba;
			counter++;
		}
//		cout << " " << counter << endl;
		if (counter == len - 1) {
			wynik++;
			if (len > max) {
				max = len;
				maxs = a;
			} 
			else if (len < min) {
				min = len;
				mins = a;
			} 
		}
	
	}
	
	cout << wynik << " min: " << min << " max: " << max << " mins: " << mins << " maxs: " << maxs;
	
	return 0;
}
