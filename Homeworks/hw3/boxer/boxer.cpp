//boxer.cpp
//Chuluunbat Purev
//2019-9-28
//Printing string in boxes of asterisk using boxer.hpp

#include "boxer.hpp"

int main() {
	int a;
	std::string msg;

	//Prompting user what the program does and how to end it
	std::cout << "This program prints a string in a box of asterisks*****Type in 0 to stop";
	std::cout << std::endl;

	//Infinite loop
	while (true) {
		std::cout << "Enter 0 to exit/Enter number of layers in box: "; a = getInt();

		//Exit.
		if (a == 0)
			break;


		//Go back to top if negative number is entere
		//Type checking is already done in the function
		if (a < 0) {
			std::cout << "Can't be negative~" << std::endl;
			continue;
		}


		std::cout << "Enter the string to display in box: "; std::cin >> msg;
		printBox(msg, a);

		//Spacing between each invidual boxes
		std::cout << std::endl;

		//Clreaing input buffer so the error checking in function getInt() wont trigger.
		std::cin.ignore(999, '\n');
	}
	return 0;
}