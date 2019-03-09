#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	// zadeklarowanie tablicy
	vector<int> tab;
	
	// dodawanie elementow do tablicy
	tab.push_back(2); // index 0
	tab.push_back(4); // index 1
	tab.push_back(5); // index 2
	tab.push_back(6); // index 3
	tab.push_back(8); // index 4
	tab.push_back(12); // index 5
	tab.push_back(13); // index 6
	tab.push_back(18); // index 7
	
	int wielkosc = tab.size() - 1; // wielkosc tablicy - 1, bo indexowanie jest od 0
	int szukana = 8; // liczba szukana
	int ostatni;
	int i = 0; // zmienna pomocnicza
	
	
	ostatni = tab[wielkosc]; // przypisujemy ostatni index tablicy tab do zmiennej ostatni
	tab[wielkosc] = szukana; // przypisujemy na osattni index tablicy szukana liczbe (wartownik)


	while(tab[i] != szukana) {
		i++;
	}
	
	if(i < wielkosc) { // jezeli znalezlismy szukana liczbe przed wartownikiem
		cout << "wartosc: " << i;
		return i;
	} else {
		cout << "nie znaleziono!";
	}
	return 0;
}
