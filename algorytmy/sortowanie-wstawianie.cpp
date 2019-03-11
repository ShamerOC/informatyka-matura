#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> tab;
	
	tab.push_back(4);
	tab.push_back(8);
	tab.push_back(2);
	tab.push_back(1);
	tab.push_back(6);
	tab.push_back(3);
	tab.push_back(9);
	tab.push_back(2);
	
	int klucz, j;
	
	for(int i = 1; i < tab.size(); i++) {
		klucz = tab[i];
		j = i - 1;
		while(j > -1 && tab[j] > klucz) { // w lewo dopoki nie trafi na liczbe mniejsza, lub koniec przedzialu
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = klucz;
	}
	
	return 0;
}
