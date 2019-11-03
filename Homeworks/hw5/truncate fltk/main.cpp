//main.cpp
//Chuluunbat Purev	
//2019-10-23
//Trunc implementation

#include "truncstruct.hpp"
#include <sstream>
#include <iostream>

//Fltk library
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>

//Callback function prototypes
void trunc8(Fl_Widget* o, void*);
void quitF(Fl_Widget* o, void*);

int main() {

	//Window
	Fl_Window* window = new Fl_Window(300, 180, "Truncate");

	//Instroction
	Fl_Output* lbl = new Fl_Output(0, 0, 300, 30, 0);
	lbl->value("    Input a string to truncate");

	//User inputs
	Fl_Input* inpt = new Fl_Input(20, 60, 100, 30, 0);
	Fl_Input* num = new Fl_Input(140, 60, 30, 30, 0);

	//Answer output
	Fl_Output* answr = new Fl_Output(20, 110, 100, 30, 0);

	//Truncate button
	Fl_Button* trunc = new Fl_Button(200, 60, 65, 30, "Truncate");
	trunc->callback(trunc8);

	//Quit button
	Fl_Button* quit = new Fl_Button(200, 110, 65, 30, "Quit");
	quit->callback(quitF);

	window->end();
	window->show();
	return Fl::run();
}

//Exit out of program
void quitF(Fl_Widget* o, void*) {
	exit(0);
}

//Take the inputed values
//Does not error check
void trunc8(Fl_Widget* o, void*) {

	std::istringstream iss;
	std::size_t a;
	std::string b;

	//Get the widgets
	Fl_Button* truncB = (Fl_Button*)o;
	Fl_Output* answr = (Fl_Output*)truncB->parent()->child(3);

	Fl_Input* inpt = (Fl_Input*)truncB->parent()->child(1);
	Fl_Input* num = (Fl_Input*)truncB->parent()->child(2);

	//String to int using stringstream
	b = num->value();
	iss.str(b);
	iss >> a;

	//Truncating function
	StringInfo str = trunc(StringInfo{ inpt->value(), a });

	//Outputing value;
	answr->value(str.str.c_str());
	
}