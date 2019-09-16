#include <iostream>
#include <string>

using std::cout;
using std::string;

void printString(string a) {
	cout << "The string: " << a << std::endl;
	cout << "The lenght: " << a.size() << std::endl;
}

void printPound(string a) {
	string s;
	for (char x : a) {
		s.append("#");
	}
	printString(s);
}

void printBckwrds(string a) {
	string s;
	for (int i = a.size()-1; i >= 0; i--) {
		s += a[i];
	}
	printString(s);
}

int main() {

	printPound("Bay");
	printString("Bay");
	printBckwrds("Bay");

	return 0;
}