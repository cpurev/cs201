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

int main() {

	Fl_Window* window = new Fl_Window(500, 500, "FiFO-LiFo");
	/*
	vector<string> str;

	//If its empty fill with values
	//If not proceed
	if (isContainerEmpty(str)) {
		for (auto i = 1; i <= 10; i++)
			fifoPush(str, std::to_string(i));
	}

	std::cout << "The list is:" << std::endl;
	printContainer(str);
	std::cout << std::endl;

	std::cout << "Added A to the end:" << std::endl;
	fifoPush(str, "A");
	printContainer(str);
	std::cout << std::endl;

	std::cout << "LIFO pop:" << std::endl;
	lifoPop(str, "A");
	printContainer(str);
	std::cout << std::endl;

	//We do this so we have the original list back
	//It works because we used LIFO
	//If we used FIFO before this would not give original list
	fifoPush(str, "A");

	std::cout << "FIFO pop:" << std::endl;
	fifoPop(str, "A");
	printContainer(str);
	std::cout << std::endl;


	return 0;*/

	window->end();
	window->show();
	return Fl::run();
}