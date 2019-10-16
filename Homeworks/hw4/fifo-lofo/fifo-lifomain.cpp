//fifo-lifomain.cpp
//Chuluunbat Purev
//2019-10-15
//Usage of fifo-lifo.hpp

#include "fifo-lifo.hpp"
#include <iostream>

int main() {

	vector<string> str{ "A", "B", "C", "D", "E" };

	printContainer(str);
	std::cout << std::endl;

	fifoPop(str, "A");

	printContainer(str);


	return 0;
}