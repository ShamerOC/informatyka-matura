#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	ifstream plik("dane.txt");
	
	if(!plik) {
		cout<<"blad";
		return 0;
	}
	
	int n;
	string b;
	int max = 0;
	int min = 255;
	int c;
	int fd;
	
	while(!plik.eof()) {
//		plik >> b;
			
			plik >> fd;
//		getline(plik, b);
//		for(int i = 0;i<b.length() / 2;i++) {
//			if(int(b[i]) != int(b[b.length() - i])) {

				cout<<fd;
				if(fd=='\n') return 0;
//				<<"x"<<b[b.length() - i]<<" ";	
			}
			
//		}
//	}
//	cout<<"najciemniejszy: "<<min<<endl<<"najjasniejszy: "<<max;
	
	return 0;
}
