#include <iostream>
#include <fstream>

using namespace std;

bool czy_zawiera(string a, string b) {
	if (a == b) {
		return true;
	}
	int d;
	
	string wiekszy = a, mniejszy = b;
	
	if (b.length() > a.length()) {
		wiekszy = b;
		mniejszy = a;
	}

	for (int i = 0; i < wiekszy.length() - mniejszy.length() + 1; i++) {
		d = 0;
		for (int j = 0; j < mniejszy.length(); j++) {
			if (wiekszy[i + j] == mniejszy[j]) {
				d++;
			}
		}
		if (d == mniejszy.length()) {
			return true;
		}
	}
	
	return false;
}

bool czy_sur_pre(string a, string b) {
	
	string wiekszy = a, mniejszy = b;
	
	if (b.length() > a.length()) {
		wiekszy = b;
		mniejszy = a;
	}
	cout << "wiekszy: " << wiekszy << " mniejszy: " << mniejszy << " ";
	int d;
	// prefix
	for (int i = mniejszy.length() - 2; i >= 0; i--) {
		d = 0;
		for (int j = i; j >= 0; j--) {
			if (wiekszy[j] == mniejszy[j + 1]) {
				d++;
				cout << wiekszy[j] << mniejszy[j + 1] << " ";
			}
		}
		if (d == i) {
			return true;
		}
		cout << endl;
	}
	
	return false;
}

int main () {
	ifstream plik ("dane.txt");
	
	
	string a, b;
	int x, d, wynik = 0;
	
	while (!plik.eof()) {
		plik >> a;
		plik >> b;
		x = 0;
		if (!czy_zawiera(a, b) && !czy_sur_pre(a, b)) {
			wynik++;
		}
		
	}

	
	cout << endl << wynik;
	return 0;
}
