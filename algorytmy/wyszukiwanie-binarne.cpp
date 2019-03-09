#include <iostream>
#include <vector>

using namespace std;

int main() {
	// zadeklarowanie tablicy
	vector<int> tab;
	
	// tablica posortowana niemalejaco
	tab.push_back(2); // index 0
	tab.push_back(4); // index 1
	tab.push_back(5); // index 2
	tab.push_back(6); // index 3
	tab.push_back(8); // index 4
	tab.push_back(12); // index 5
	tab.push_back(13); // index 6
	tab.push_back(18); // index 7
	
	int szukana = 12;
	int p = 0; // poczatek tablicy
	int n = tab.size() - 1; // ostatni index tablicy - 1, bo numerowanie jest od 0
	int r = n; // koniec tablicy
	int q; // potem: polowa tablicy
	
	while(p <= r) {
		q = (p + r) / 2; // przypisujemy pod q liczbe polowy tablicy
		if (tab[q] == szukana) {
			cout << "liczba znaleziona pod indexem: " << q;
			return q;
		} else { // jezeli tab[q] nie jest rowna szukanej, to sprawdzmy czy tabl[q] jest mniejsza od szukanej i nastepnie zmniejszamy obszar szukania, manipulujac q i r
			if (tab[q] > szukana) {
				r = q - 1;
			} else {
				p = q + 1;
			}
		}
	}
	
	cout << "nie znaleziono"; // wyswietli sie tylko wtedy kiedy powyzsza petla sie zamknie (wtedy, gdy nie znajdzie szukanej w tablicy)
	
	
	return 0;
}
