#include <iostream>
#include <fstream>

using namespace std;

bool czy_anagram (string a, string b) {
	int len = a.length();
	
	if (len != b.length()) {
		return false;
	}
	
	char szukana;
	int l;
	
	for (int i = 0; i < len; i++) {
		szukana = a[i];
		b[len] = szukana;
		l = 0;
		while (szukana != b[l]) {
			l++;
		}
		if (l == len) {
			return false;
		}
	}
	
	return true;
}

int main() {
	ifstream plik("anagram.txt");
	ofstream of("odp4b.txt");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	string a[5];
	int len;
	bool n;
	while (!plik.eof()) {
		n = true;
		for (int i = 0; i < 5; i++) {
			plik >> a[i];
		}
		
		for (int i = 0; i < 5; i++) {
			if (!czy_anagram(a[0], a[i])) {
				n = false;
				break;
			}
		}
		
		if (n) {
			for (int i = 0; i < 5; i++) {
				of << a[i] << " ";
			}
			of << endl;
		}
		
	}
	return 0;
}
