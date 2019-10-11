//rdstr.cpp
//Chuluunbat Purev
//2019-10-7
//Body of rdstr.hpp

#include "rdstr.hpp"

#include <string>
#include <iostream>
#include <sstream>

double getDouble(std::string str) {

	//std::string line;
	double a;

	//std::getline(std::cin, line);
	std::istringstream ss(str);
	ss >> a;

	if (!ss)
		return -1;
	return a;
}