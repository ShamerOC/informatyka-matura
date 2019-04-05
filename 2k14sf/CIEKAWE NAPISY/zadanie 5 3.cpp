#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	ifstream napisy("NAPIS.TXT");
	
	if (!napisy) {
		cout << "Blad!";
		return 0;
	}
	
	string a;
	int len, wynik = 0, powt = 0;
	string spr;
	vector<string> tab;
	vector<string> napiss;
	
	while (!napisy.eof()) {
		napisy >> a;
		tab.push_back(a);
	}
	
	len = tab.size();
	
	for(int i = 0; i < len; i++) {
		wynik = 0;
		spr = tab[i];
		
		for(int i = 0; i < len ; i++) {
			if (spr == tab[i]) wynik++;
		}
		
		if(wynik > 1) {
			powt++;
			napiss.push_back(spr);
		}
		
		
	}
	
	for(int i = 0; i < napiss.size() - 1; i++) {
		cout << napiss[i] << endl;
	}
	
	cout << powt;
	
	return 0;
}
