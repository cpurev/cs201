//grid.cpp
//Chuluunbat Purev
//2019-9-11
//Grid that can be marked with user input

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x = 1;
	int y = 1;
	cout << "Enter size ~\n";
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;
	std::string a;
	int d;
	int b, c;
	bool **arr = new bool*[x];
	for (int i = 0; i < x; ++i) {
		arr[i] = new bool[y];
		arr[i][y] = false;
	}
	while (true) {
		for (int i = 0; i < x; i++) {
			for (int j = 0; j < y; j++) {
				if (arr[i][j])
					cout << ". ";
			}
			cout << endl;
		}
		cout << "Enter location with no space.Enter any one digit number to exit\n";
		cin >> a;
		if (a == "0")
			break;
		if (a.size != 2)
			continue;
		d = std::stoi(a);
		if (9 > d || d > 99)
			continue;
		b = d % 10;
		c = d / 10 % 10;
		arr[b][c] = false;

	}

	return 1;
}