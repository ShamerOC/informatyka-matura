#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ifstream plik("dane.txt");
//	ifstream plik("przyklad.txt");
	
	int a[320][200];
	
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 320; j++) {
			plik >> a[j][i];
		}
	}
	
	int prawa, wynik = 0;
	bool os;
	
	for (int i = 0; i < 200; i++) {
		os = true;
		for (int j = 0; j < 160; j++) {
			prawa = 319 - j;
			if (a[j][i] != a[prawa][i]) {
				os = false;
			}
		}
		if (!os) {
			wynik++;
		} 
	}
	
	cout << "Nalezy usunac " << wynik << " wierszy";
	
	return 0;
}
