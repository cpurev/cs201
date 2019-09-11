//hw1
//Chuluunbat Purev
//2019-9-13
//User input and output


#include <iostream>
#include <exception>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n = 0;
	while (1 > 0) {
		cout << "Enter the size of a diamond: ";
		try {
			cin >> n;
			break;
		}
		catch (std::runtime_error exp) {
			cout << "Error: Try Again";
		}
	}

	int space = n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++) {
			cout << "* ";
		}
		space--;
		cout << endl;
	}

	space++;

	for (int i = n; i > 0; i--) {
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "* ";
		}
		space++;
		cout << endl;
	}

	return 0;
}