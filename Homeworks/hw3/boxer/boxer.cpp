//boxer.cpp
//Chuluunbat Purev
//2019-9-28
//Printing string in boxes of asterisk using boxer.hpp

#include "boxer.hpp"

int main() {
	int a;
	std::string msg;
	std::cout << "This program prints a string in a box of asterisks*****Type in 0 to stop";
	std::cout << std::endl;
	while (true) {
		std::cout << "Enter number of layers in box: "; a = getInt();
		if (a == 0)
			break;
		if (a < 0) {
			std::cout << "Can't be negative~" << std::endl;
			continue;
		}
		std::cout << "Enter the string to display in box: "; std::cin >> msg;
		printBox(msg, a);
		std::cout << std::endl;
		std::cin.ignore(999, '\n');
	}
	return 0;
}