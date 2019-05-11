#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	ifstream plik("slowa.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	
	string a;
	char b, wcz;
	int len, wynik = 0, blok, z, zmax = 0, max = 0;
	vector <string> maxi;
	
	while (!plik.eof()) {
		plik >> a;
		blok = 1;
		z = 0;
		zmax = 0;
		for(int i = 1; i < a.length(); i++) {
			wcz = a[i - 1];
			b = a[i];
			if (b == wcz && b == '0') {
				z++;
			} else if (b != wcz) {
				z = 0;
				blok++;
			}	
			if (zmax < z) {
				zmax = z;
			}
		}
		if (zmax > max) {
			max = zmax;
			maxi.clear();
		}
		if (zmax == max) {
			maxi.push_back(a);
		}
	}
	cout << "max: " << max + 1 << " ";
	for(int i = 0; i < maxi.size(); i++) {
		cout << maxi[i] << " ";
	}
	return 0;
}
