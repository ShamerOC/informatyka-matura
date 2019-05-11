#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	ifstream plansza("plansza.txt");
	ifstream gracze("robot.txt");
	ofstream xd("xd.txt");
	
	if (!plansza || !gracze) {
		cout << "Blad!";
		return 0;
	}
	
	int a;
	int map[20][20], j = 0, i = 0;
	
	
	while (!plansza.eof()) {
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
	int x, y;
	int tempScore;
	vector<int> score;
	
	while (!gracze.eof()) {
		tempScore = 3;
		x = 0;
		y = 20;
		gracze >> b;
		for (i = 0; i < b.length(); i++) {
			k = b[i];
			switch (k) {
				case 'N': {
					y ++;
					break;
				}
				case 'E': {
					x ++;
					break;
				}
				case 'S': {
					y --;
					break;
				}
				case 'W': {
					x --;
					break;
				}
			}
			if (x < 0 || x > 20 || y < 0 || y > 20) {
				tempScore = -1;
				break;
			}
			tempScore += map[x][y];
		}
		score.push_back(tempScore);
		xd << tempScore << endl;
	}

	return 0;
}
