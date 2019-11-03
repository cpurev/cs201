//main.cpp
//Chuluunbat Purev	
//2019-10-23
//Trunc implementation

#include "truncstruct.hpp"
#include <sstream>
#include <iostream>


int main() {
	std::string a;
	std::cout << "Input string to truncate to 8: "; std::cin >> a;

	StringInfo b = trunc8(a);

	std::cout << "The string: " << b.str << std::endl;
	std::cout << "The length: " << b.len << std::endl;

	
	return 0;
}