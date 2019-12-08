//Simulator.cpp
//2019-12-7
//Chuluunbat Purev
//Simulator body

#include "Simulator.hpp"
#include <iostream>
#include <sstream>

int Simulator::askOwner() {
	std::string str; 
	int temp;
	std::istringstream iss;

	std::cout << "Set the temperature of AC ~ ";

	//Right input checker
	std::getline(std::cin, str);
	iss.str(str);
	if (!(iss >> temp))
		return -1;

	//User exit
	if (temp == 0)
		return 0;

	if (!(16 < temp && temp < 27))
		return -1;


	usrTemp = temp;

	return 1;
}