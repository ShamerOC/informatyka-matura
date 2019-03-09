#include <iostream>
#include <vector>

using namespace std;

int szukaj(vector<int>& tab, int p, int r, int szukana) {
	if(p > r) {
		cout<< "nie znaleziono";
	} else {
		int q = (p + r) / 2;
		if (tab[q] == szukana) {
			cout << "znaleziono: " << q;
			return q;
		} else {
			if (tab[q] > szukana) szukaj(tab, p, q - 1, szukana);
			else szukaj(tab, q + 1, r, szukana);
		}		
	}
	
	return 0;
}

int main() {
	vector<int> tab;
	
	tab.push_back(2); // index 0
	tab.push_back(4); // index 1
	tab.push_back(5); // index 2
	tab.push_back(6); // index 3
	tab.push_back(8); // index 4
	tab.push_back(12); // index 5
	tab.push_back(13); // index 6
	tab.push_back(18); // index 7

	int szukana = 12;

	int p = 0;
	int r = tab.size() - 1;

	szukaj(tab, p, r, szukana);

	return 0;
}
