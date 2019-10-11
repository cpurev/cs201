//bulls-and-cows.cpp
//Chuluunbat Purev
//2019-10-10
//A guessing game called Bulls and Cows

#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>


int main() {

	std::string str;
	std::vector<int> n;
	std::istringstream iss;
	int gsdNum;
	std::string answr;
	int cows = 0;
	int bulls = 0;

	srand(std::time(NULL));

	for (auto i = 0; i < 4; i++) {
		n.push_back(rand() % 10);
		answr.append(std::to_string(n[i]));
	}
	std::cout << "\t\tBulls and Cows" << std::endl;
	std::cout << "Guess the 4 digit number\t The number is random\t Enter 0 to give up" << std::endl;
	std::cout << answr << std::endl;

	while (true) {
		iss.clear();
		std::cout << "Your number is: ";
		std::getline(std::cin, str);
		iss.str(str);
		if (!(iss >> gsdNum)) {
			std::cout << "Enter a whole number~~Try again" << std::endl;
			continue;
		}
		if (gsdNum == 0) {
			std::cout << "You gave up the number was ~ " << answr;
			break;
		}
		if (str.size() != 4) {
			std::cout << "Enter 4 digit number~~Try again" << std::endl;
			continue;
		}
		
		if(gsdNum < 0) {
			std::cout << "Enter positive number~~Try again" << std::endl;
			continue;
		}
		std::size_t found;
		for (auto i = 0; i < n.size(); i++) {

			if (n[i] == str[i]) 
				bulls++;
			else
		}

		if (bulls == 4) {
			std::cout << "You guessed right!"; break;	}
		else {
			std::cout << bulls << " bull and " << cows << " cow" << std::endl;
			bulls = 0; cows = 0;
		}
	}

}