 #include <iostream>
 #include <fstream>
 #include <vector>
 #include <cmath>
 
 using namespace std;
 
 int main() {
 	ifstream plik("liczby.txt");
 	
 	if(!plik) {
 		cout << "Blad wczytywania pliku!";
 		return 0;
	 }
	 
	 string a;
	 int j, dwa = 0, osiem = 0;
	 int liczba;
	 
	 while(!plik.eof()) {
	 	plik >> a;
	 	liczba = 0;
	 	
	 	if(a.length() > 0) {
	 		if (a[a.length() - 1] == '0') { // zerowa potego 2 to 1, ktore nie jest podzielne przez 2
	 			dwa ++;
	 			if (a.length() > 3) {
	 				if (a[a.length() - 2] == '0' && a[a.length() - 3] == '0') osiem++; // potegi 2: 1, 2, 4, 8, ... wszystkie potegi 2 wieksze od 2^2 (4) sa podzielne przez 8
			 	} 
			 }
		 }
	 }
	 
	 cout << "Podzielne przez 2: " << dwa << " Podzielne przez 8: " << osiem;
 	return 0;
 }
