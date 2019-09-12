//greatest.cpp
//Chuluunabat Purev
//2019-9-11
//Error handling with cin(input)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n = 0;
	int a = 0;
	cout << "Enter a sequence of positive integers, ending with zero.\nI will print the greatest positive number entered." << endl;
	cout << "Enter a positive integer: ";
	while (true) {
		while (!(cin >> n)) {
			cin.clear();
			cin.ignore(999, '\n');
			cout << "Enter a positive integer: ";
			continue;
		}
		if (n == 0)
			break;
		cout << "Enter a positive integer: ";
		if (n < 0)
			continue;
		if (a <= n) {
			a = n;
			continue;
		}
	}
	cout << "The greatest number entered: " << a;
	return 1;
}