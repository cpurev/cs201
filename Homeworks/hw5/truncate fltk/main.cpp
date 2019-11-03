//main.cpp
//Chuluunbat Purev	
//2019-10-23
//Trunc implementation

#include "truncstruct.hpp"
#include <sstream>
#include <iostream>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>

void trunc8(Fl_Widget* o, void*);

int main() {

	Fl_Window* window = new Fl_Window(300, 180, "Truncate");

	Fl_Output* lbl = new Fl_Output(0, 0, 300, 30, 0);
	lbl->value("    Input a string to truncate");

	Fl_Input* inpt = new Fl_Input(20, 60, 100, 30, 0);
	Fl_Input* num = new Fl_Input(140, 60, 30, 30, 0);

	Fl_Output* answr = new Fl_Output(20, 110, 100, 30, 0);

	Fl_Button* trunc = new Fl_Button(200, 60, 65, 30, "Truncate");
	trunc->callback(trunc8);

	Fl_Button* quit = new Fl_Button(200, 110, 65, 30, "Quit");

	/*std::string a;
	std::cout << " to 8: "; std::cin >> a;

	StringInfo b = trunc8(a);

	std::cout << "The string: " << b.str << std::endl;
	std::cout << "The length: " << b.len << std::endl;*/

	window->end();
	window->show();
	return Fl::run();
}

void trunc8(Fl_Widget* o, void*) {

	Fl_Button* trunc = (Fl_Button*)o;
	Fl_Output* answr = (Fl_Output*)trunc->parent()->child(3);

	Fl_Input* inpt = (Fl_Input*)trunc->parent()->child(1);
	Fl_Input* num = (Fl_Input*)trunc->parent()->child(2);


	
}