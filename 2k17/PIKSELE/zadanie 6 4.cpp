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
	
	int wynik = 0, max = 0, dl;
	
	for (int i = 0; i < 320; i++) {
		dl = 1;
		for (int j = 0; j < 199; j++) {
			if (a[i][j] == a[i][j + 1]) {
				dl++;
			}
			else {
				if (dl > max) {
					max = dl;
				}
				dl = 1;
			}
		}
	}
	

	
	cout << "Dlugosc najdluzszej lini pionowej: " << max;
	
	return 0;
}
