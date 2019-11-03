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
#include <FL/fl_ask.H>

std::string answr;

std::istringstream iss;
std::ostringstream oss;

void eval(Fl_Widget* o, void*);
void generateRanNum();
void quitF(Fl_Widget*, void*);

int main(int argc, char** argv) {

	generateRanNum();

	Fl_Window* window = new Fl_Window(400, 150);

	//User prompt
	Fl_Multiline_Output* prmpt = new Fl_Multiline_Output(0, 0, 400, 50, 0);
	prmpt->value("\t\tBulls and Cows\n\tGuess the 4 digit number\t The number is random");

	Fl_Input* inpt = new Fl_Input(50, 70, 100, 50, 0);

	Fl_Button* guess = new Fl_Button(180, 70, 55, 40, "Guess!");
	guess->callback(eval);

	Fl_Button* quit = new Fl_Button(300, 70, 55, 40, "Quit");
	quit->callback(quitF);

	window->end();
	window->show(argc, argv);
	return Fl::run();

}

void quitF(Fl_Widget*, void*) {
	oss.clear();
	oss << "The answer was: " << answr;
	fl_alert(oss.str().c_str());
	exit(0);
}

void generateRanNum() {

	//Setting the seed of random
	//We do this set rand() function truly random each time
	srand(std::time(NULL));

	//Creating 4 random numbers
	for (auto i = 0; i < 4; i++)
		//A random number between 1 to 10
		answr.append(std::to_string(rand() % 10 + 1));

}

void eval(Fl_Widget* o, void*) {

	//Get the widgets
	Fl_Button* guess = (Fl_Button*)o;
	Fl_Output* outpt = (Fl_Output*)guess->parent()->child(0);
	Fl_Input* inpt = (Fl_Input*)guess->parent()->child(1);

	//User input as string
	std::string str;
	str = inpt->value();


	//User input as int
	int gsdNum;

	int cows = 0;
	int bulls = 0;

	//In istringstream to check type
	iss.str(str);
	if (!(iss >> gsdNum)) {
		outpt->value("Enter a whole number"); return;
	}

	//Checking if entered number is 4 digits 
	if (str.size() != 4) {
		outpt->value("Enter 4 digit number"); return;
	}

	//Needs to be positive
	if (gsdNum < 0) {
		outpt->value("Enter positive number"); return;
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
	if (bulls == 4) 
		outpt->value("You guessed right!");
	else {

		//Print results
		oss << "Bull:  "<< bulls << " Cow: " << cows;
		outpt->value(oss.str().c_str());
	}


}