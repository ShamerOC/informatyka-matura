#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	ifstream plik("przyklad.txt");
	
	if(!plik) {
		cout<<"blad";
		return 0;
	}
	
	int n;
	int max = 0;
	int min = 255;
	
	while(!plik.eof()) {
		plik >> n;
		if(n > max) {
			max = n;
		}
		if(n < min) {
			min = n;
		}
	}
	cout<<"najciemniejszy: "<<min<<endl<<"najjasniejszy: "<<max;
	
	return 0;
}
