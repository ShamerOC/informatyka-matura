#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	ifstream plik("NAPIS.TXT");
	
	if (!plik) {
		cout << "Blad!";
		return 0;
	}
	string a;
	vector<string> tab;
	vector<int> match;
	
	int suma, wynik = 0, b;
	
	while (!plik.eof()) {
		plik >> a;
		tab.push_back(a);
	}
	
	for(int i = 0; i < tab.size() - 1; i++) {
		for(int j = 0; j < tab.size() - 1; j++) {
			if (i != j) {
				if (tab[i] == tab[j]) {
					match.push_back(i);
				}
			}
		}
	}
	
	cout << match.size() << endl;
	for(int i = 0; i < match.size() - 1; i++) {
		cout << tab[match[i]] << " ";
	}

	
	return 0;
}
