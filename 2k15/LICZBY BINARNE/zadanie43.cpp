 #include <iostream>
 #include <fstream>
 
 using namespace std;
 
 int main() {
 	ifstream plik("liczby.txt");
 	
 	if(!plik) {
 		cout << "Blad wczytywania pliku!";
 		return 0;
	 }
	 
	 string a, liczbaMax = "01", liczbaMin = "1111111111";
	 int max = 0, wierszMax, min = 10, wierszMin;
	 int wiersz = 1;
	 while (!plik.eof()) {
	 	plik >> a;
	 	if(a.length() >= max) {
	 		for(int i = 0; i <= a.length() - 1; i++) {
	 			if(a[i] == '1' && liczbaMax[i] == '0') {
	 				max = a.length();
	 				wierszMax = wiersz;
			 		liczbaMax = a;
			 		break;
				 } 
			 }

		 }
		 if(a.length() <= min) {
			 for(int i = 0; i <= a.length() - 1; i++) {
			 	if(a[i] == '0' && liczbaMin[i] == '1') {
			 		min = a.length();
		 			wierszMin = wiersz;
		 			liczbaMin = a;
		 			break;
				 }
			 }
		}
	 	wiersz++;
	 }
	 
	 cout << "najmniejsza liczba to: " << liczbaMin << " wiersz: " << wierszMin << endl << "Najwieksza liczba to: " << liczbaMax << " wiersz: " << wierszMax;
	 
 	
 	return 0;
 }
