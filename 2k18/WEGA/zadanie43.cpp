#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int ile(char a, char b) {
	return int(b) - int(a);
}

int main() {
	
	fstream plik("sygnaly.txt");
	
	if(!plik) {
		cout<<"blad";
		return 0;
	}
	
	string a;
	int b = 0;
		
	while(!plik.eof()) {
		b = 0;
		plik >> a;
		for(int i = 0; i < a.length(); i++) {
			for(int j = 0; j < a.length(); j++) {
				if(ile(a[i], a[j]) > 10) b++;
			}
		}
		if(b == 0) cout<<a<<endl;
	}
	return 0;
}
