//hw1
//Chuluunbat Purev
//2019-9-13
//User input and output


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n = 0;

	cout << "Enter the size of a diamond: ";
	while (true) {
		while (!(cin >> n)) {
			cin.clear();
			cin.ignore(999, '\n');
			cout << "Error: Try Again ~ ";
			continue;
		}
		if (n > 0)
			break;
		else
			cout << "Error: Try Again ~ ";
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


	for (int i = n; i > 0; i--) {
		space++;
		for (int j = 0; j < space; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}