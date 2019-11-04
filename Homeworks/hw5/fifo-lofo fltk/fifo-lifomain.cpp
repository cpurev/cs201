//fifo-lifomain.cpp
//Chuluunbat Purev
//2019-10-15
//Usage of fifo-lifo.hpp

#include "fifo-lifo.hpp"
#include <iostream>

//FLTK libraries
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Multiline_Output.H>

//Global variables
vector<string> str;
string a;

void updateList(const vector<string>& v, string& str) {
	str = "";
	for (auto x : v)
		str += x + "\n";
}

void fifoPushF(Fl_Widget* o, void*) {
	//Get the widgets
	Fl_Button* btn = (Fl_Button*)o;
	Fl_Input* inpt = (Fl_Input*)o->parent()->child(1);
	Fl_Multiline_Output* outpt = (Fl_Multiline_Output*)o->parent()->child(0);

	fifoPush(str, inpt->value());

	updateList(str, a);

	outpt->value(a.c_str());

}

void fifoPopF(Fl_Widget* o, void*) {
	//Get the widgets
	Fl_Button* btn = (Fl_Button*)o;
	Fl_Input* inpt = (Fl_Input*)o->parent()->child(1);
	Fl_Multiline_Output* outpt = (Fl_Multiline_Output*)o->parent()->child(0);

	fifoPop(str, a);

	updateList(str, a);

	outpt->value(a.c_str());

}

void lifoPopF(Fl_Widget* o, void*) {
	//Get the widgets
	Fl_Button* btn = (Fl_Button*)o;
	Fl_Input* inpt = (Fl_Input*)o->parent()->child(1);
	Fl_Multiline_Output* outpt = (Fl_Multiline_Output*)o->parent()->child(0);

	lifoPop(str, a);

	updateList(str, a);

	outpt->value(a.c_str());

}

int main() {

	Fl_Window* window = new Fl_Window(250, 300, "FiFO-LiFo");

	Fl_Multiline_Output* otp = new Fl_Multiline_Output(120, 20, 120, 260, 0);

	for (auto i = 0; i <= 10; i++) {
		fifoPush(str, std::to_string(i));
		a += str[i] + "\n";
	}
	otp->value(a.c_str());

	Fl_Input* inpt = new Fl_Input(10, 30, 80, 30, 0);

	Fl_Button* fifoPsh = new Fl_Button(10, 100, 80, 30, "FIFO PUSH");
	fifoPsh->callback(fifoPushF);

	Fl_Button* fifoPop = new Fl_Button(10, 140, 80, 30, "FIFO POP");

	Fl_Button* lifoPsh = new Fl_Button(10, 180, 80, 30, "LIFO PUSH");
	lifoPsh->callback(fifoPushF);

	Fl_Button* lifoPop = new Fl_Button(10, 220, 80, 30, "FIFO POP");

	window->end();
	window->show();
	return Fl::run();
}