#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream plik("anagram.txt");
	ofstream of("odp4a.txt");
	
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
		len = a[0].length();
		for (int i = 1; i < 5; i++) {
			if (a[i].length() != len) {
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
