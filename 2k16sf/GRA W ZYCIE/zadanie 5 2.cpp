#include <iostream>
#include <fstream>

using namespace std;

void rysuj (char tab[20][12]) {
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 20; j++) {
			cout << tab[j][i];
		}
		cout << endl;
	}
}

int sasiedzi (char tab[20][12], int x, int y) {
	int x1, x2, y1, y2, s = 0;
	if (x - 1 < 0) {
		x1 = 19;
	} else {
		x1 = x - 1;
	}
	if (x + 1 > 19) {
		x2 = 0;
	} else {
		x2 = x + 1;
	}
	if (y - 1 < 0) {
		y1 = 11;
	} else {
		y1 = y - 1;
	}
	if (y + 1 > 11) {
		y2 = 0;
	} else {
		y2 = y + 1;
	}
	if (tab[x1][y] == 'X') s++;
	if (tab[x2][y] == 'X') s++;
	if (tab[x][y1] == 'X') s++;
	if (tab[x][y2] == 'X') s++;
	if (tab[x1][y1] == 'X') s++;
	if (tab[x2][y1] == 'X') s++;
	if (tab[x1][y2] == 'X') s++;
	if (tab[x2][y2] == 'X') s++;
	
	return s;
}

void ruch (char tab[20][12]) {
	char tab2[20][12];
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) { 
			tab2[x][y] = tab[x][y];
		}
	}
	int s;
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			s = sasiedzi(tab2, x, y);
			if (tab2[x][y] == 'X') {
				if (s != 2 && s != 3) {
					tab[x][y] = '.';
				}
			} else if (tab2[x][y] == '.') {
				if (s == 3) {
					tab[x][y] = 'X';
				}
			}
			
		}
	}
}

int equals(char tab[20][12], char tab2[20][12]) {
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 20; x++) {
			if (tab[x][y] != tab2[x][y]) {
				return 0;
			}
		}
	}
	return 1;
}

int main () {
	ifstream plik("gra.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	char tab[20][12], tab2[20][12];
	
	string a;
	int len, b = 0;
	
	while (!plik.eof()) {
		plik >> a;
		len = a.length();
		for (int i = 0; i < len; i++) {
			if (a[i] == '.') {
				tab[i][b] = '.';
				tab2[i][b] = '.';
			} else if (a[i] == 'X') {
				tab[i][b] = 'X';
				tab2[i][b] = 'X';
			}
		}
		b ++;
	}

	for (int i = 0; i < 100; i ++) {
		ruch(tab);
		cout << i << " ";
		if (equals(tab, tab2)) {
			rysuj(tab);
			break;
		}
		cout << endl;
		ruch(tab2);
	}
	
//	rysuj(tab);
	return 0;
}
