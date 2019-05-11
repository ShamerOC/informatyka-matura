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
	
	int min = 255, max = 0;
	
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 320; j++) {
			if (a[j][i] < min) {
				min = a[j][i];
			}
			
			if (a[j][i] > max) {
				max = a[j][i];
			}
		}
	}
	
	cout << "Max: " << max << endl << "Min: " << min;
	
	return 0;
}
