#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	ifstream plik("sygnaly.txt");
	
	if(!plik) {
		cout<<"Blad";
		return 0;
	}
	
	int n = 1;
	int m = 40;
	string a;
	
	while(!plik.eof()) {
		plik >> a;
		if(n == m) {	
			cout<<a[9];
			m += 40;
		} 
		n++;
	}
	return 0;
}
