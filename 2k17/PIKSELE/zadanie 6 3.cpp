#include <iostream>
#include <fstream>

using namespace std;

int main () {
//	ifstream plik("dane.txt");
	ifstream plik("przyklad.txt");
	
	int a[320][200], k[320][200];
	
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 320; j++) {
			plik >> a[j][i];
			k[j][i] == 0;
		}
	}
	
	int wynik = 0;
	
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 319; j++) {
			if (a[j][i] - a[j + 1][i] > 128 || a[j][i] - a[j + 1][i] < - 128) {
				k[j][i] = 1;
				k[j + 1][i] = 1;
			}
		}
	}
	
	for (int i = 0; i < 199; i++) {
		for (int j = 0; j < 320; j++) {
			if (a[j][i] - a[j][i + 1] > 128 || a[j][i] - a[j][i + 1] < - 128) {
				k[j][i] = 1;
				k[j][i + 1] = 1;
			}
		}
	}
	
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 320; j++) {
			if(k[j][i] == 1) {
				wynik++;
			}
		}
	}
	
	cout << "Istnieje " << wynik << " kotrastujacych pikseli";
	
	return 0;
}
