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
#include <FL/Fl_Multiline_Output.H>
#include <FL/Fl_Button.H>

void eval(Fl_Widget* o, void*);

int main(int argc, char** argv) {

	Fl_Window* window = new Fl_Window(400, 150);

	//User prompt
	Fl_Multiline_Output* prmpt = new Fl_Multiline_Output(0, 0, 400, 50, 0);
	prmpt->value("\t\tBulls and Cows\n\tGuess the 4 digit number\t The number is random");

	Fl_Input* inpt = new Fl_Input(50, 70, 100, 50, 0);

	Fl_Button* guess = new Fl_Button(180, 70, 55, 40, "Guess!");
	guess->callback(eval);

	Fl_Button* quit = new Fl_Button(300, 70, 55, 40, "Quit");

	window->end();
	window->show(argc, argv);
	return Fl::run();

}

void eval(Fl_Widget* o, void*) {

	Fl_Button* guess = (Fl_Button*)o;
	Fl_Input* inpt = (Fl_Input*)guess->parent()->child(1);

	//User input as string
	std::string str;
	str = inpt->value();

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

	//In istringstream to check type
	iss.str(str);
	if (!(iss >> gsdNum)) {
		inpt->value("Enter a whole number~~Try again");
	}

	//Checking if entered number is 4 digits 
	if (str.size() != 4) {
		inpt->value("Enter 4 digit number~~Try again");
	}

	//Needs to be positive
	if (gsdNum < 0) {
		inpt->value("Enter positive number~~Try again");
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
		std::cout << "You guessed right!";
	}
	else {

		//Print results
		std::cout << bulls << " bull and " << cows << " cow" << std::endl;

		//Set the counters to 0 for the next guessed number.
		bulls = 0; cows = 0;
	}


}