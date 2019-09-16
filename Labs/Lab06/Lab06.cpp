#include <iostream>
#include <string>

using std::cout;
using std::string;

void printString(string a) {
	cout << "The string: " << a << std::endl;
	cout << "The lenght: " << a.size();
}

int main() {

	printString("Bay");

	return 0;
}