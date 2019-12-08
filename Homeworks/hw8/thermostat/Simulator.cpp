//Simulator.cpp
//2019-12-7
//Chuluunbat Purev
//Simulator body

#include "Simulator.hpp"
#include <iostream>
#include <sstream>

void Simulator::askOwner() {
	std::string str; 
	int temp;
	std::istringstream iss;

	std::cout << "Set the temperature of AC";

	//Right input checker
	std::getline(std::cin, str);
	iss.str(str);
	if (!(iss >> temp))
		return;
	if (!(16 < temp && temp < 27))
		return;

	//User exit
	if (temp == 0)
		return;

	usrTemp = temp;
}