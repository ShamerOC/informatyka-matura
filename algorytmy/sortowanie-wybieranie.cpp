#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> tab;
	
	tab.push_back(4);
	tab.push_back(8);
	tab.push_back(2);
	tab.push_back(1);
	tab.push_back(6);
	tab.push_back(3);
	tab.push_back(9);
	tab.push_back(2);
	
	int min, pomoc;
	
	for(int i = 0; i < tab.size() - 1; i++) {
		min = i;
		for(int j = i + 1; j < tab.size(); j++) {
			if(tab[min] < tab[j]) min = j; // znajdz minimum w mniejszej tablicy 
		}
		pomoc = tab[i];
		tab[i] = tab[min];
		tab[min] = pomoc;
	}
	
	return 0;
}
