//bulls-and-cows.cpp
//Chuluunbat Purev
//2019-10-10
//A guessing game called Bulls and Cows

#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <ctime>

//FLTK libraries
#include <FL/Fl.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>

int main() {

	//User input as string
	std::string str;
	
	std::istringstream iss;

	//User input as int
	int gsdNum;

	//The number to guess in string
	std::string answr;

	int cows = 0;
	int bulls = 0;

	//Setting the seed of random
	//We do this set rand() function truly random each time
	srand(std::time(NULL));

	//Creating 4 random numbers
	for (auto i = 0; i < 4; i++) 
		//A random number between 1 to 10
		answr.append(std::to_string(rand() % 10 + 1));

	//User prompts
	std::cout << "\t\tBulls and Cows" << std::endl;
	std::cout << "Guess the 4 digit number\t The number is random\t Enter 0 to give up" << std::endl;

	while (true) {

		//Clear buffer so error from last time wont carry over
		iss.clear();

		//Get guessed number
		std::cout << "Your number is: ";
		std::getline(std::cin, str);

		//In istringstream to check type
		iss.str(str);
		if (!(iss >> gsdNum)) {
			std::cout << "Enter a whole number~~Try again" << std::endl;
			continue;
		}

		//Zero to exit the program
		if (gsdNum == 0) {
			std::cout << "You gave up the number was ~ " << answr;
			break;
		}

		//Checking if entered number is 4 digits 
		if (str.size() != 4) {
			std::cout << "Enter 4 digit number~~Try again" << std::endl;
			continue;
		}
		
		//Needs to be positive
		if(gsdNum < 0) {
			std::cout << "Enter positive number~~Try again" << std::endl;
			continue;
		}

		//Position of found char in string
		std::size_t found;

		//Loop 4 times each comparing with guessed number
		for (auto i = 0; i < 4; i++) {

			//Check if bulls
			if (answr[i] == str[i]) 
				bulls++;
			else {
				//Check if cows
				//Using find() method 
				found = str.find(answr[i]);
				if (found != std::string::npos)
					cows++;
			}
		}

		//Last check to know if user was correct
		if (bulls == 4) {
			std::cout << "You guessed right!"; break;	}
		else {

			//Print results
			std::cout << bulls << " bull and " << cows << " cow" << std::endl;

			//Set the counters to 0 for the next guessed number.
			bulls = 0; cows = 0;
		}
	}


}