 #include <iostream>
 #include <fstream>
 
 using namespace std;
 
 int main() {
 	
 	ifstream plansza("plansza.txt");
 	ifstream gracze("robot.txt");
 	
 	if (!plansza || !gracze) {
 		cout << "Blad!";
 		return 0;
	 }
	 
	 int a, i = 0, j = 0;
	 int map[20][20];
	 
	 while(!plansza.eof()) {
	 	plansza >> a;
	 	map[i][j] = a;
	 	i++;
	 	if (i == 20) {
	 		i = 0;
	 		j++;
		 }
	 }
	 
	 string b;
	 char k;
	 int len;
	 int x = 0;
	 int y = 20;
	 int dys = 0;
	 int wynik = 0;
	 
	 while(!gracze.eof()) {
	 	x = 0;
	 	y = 20;
	 	dys = 0;
	 	gracze >> b;
	 	len = b.length();
	 	for(int i = 0; i < len; i++) {
	 		k = b[i];
	 		switch (k) {
	 			case 'N': 
				 		y++;
	 					break;
	 			case 'S':
	 					y--;
	 					break;
	 			case 'E':
	 					x++;
	 					break;
	 			case 'W':
	 					x--;
	 					break;
			}
			if (x < 0 || x > 20 || y < 0 || y > 20) {
	 			dys++;
			}
		 }
		 if (dys > 0) {
		 	wynik++;
		 }
	 }
	 cout << wynik;
 	return 0;
 }
