//Lab03
//Chuluunbat Purev
//2019-09-06
//Using while-loops to print int various ways.

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void excersice1() {
	int i = 1;
	while (i <= 10) {
		cout << i << ", ";
		i++;
	}
	cout << endl;
}

void excersice2() {
	int x, y;
	int i = 0, j = 0;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

	while (i < y) {
		while (j < x) {
			cout << "*";
			j++;

		}
		cout << endl;
		j = 0;
		i++;
	}
}

void excersice3() {
	int x, y;
	int i = 0, j = 0;
	bool a = true;

	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

	while (i < y) {
		while (j < x) {
			if (a) {
				cout << "*";
				a = false;
			}
			else {
				cout << "#";
				a = true;
			}
				
			j++;

		}
		cout << endl;
		j = 0;
		i++;
	}

}

int main() {
	excersice1();
	cout << endl;
	excersice2();
	cout << endl;
	excersice3();
	cout << endl;
	return 0;
}