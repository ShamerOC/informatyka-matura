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
	int counter = 0;
	
	
	
	while(!plik.eof()) {
		plik >> a;
		
		int len = a.length();
		if (a[0] == a[len - 1]) {
			counter++;
		}
	}
	cout << counter;
	
	return 0;
}
