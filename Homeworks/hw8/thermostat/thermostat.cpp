//thermostat.cpp
//2019-12-7
//Chuluunbat Purev
//Thermostat

#include "Agent.hpp"
#include "Simulator.hpp"
#include "Enviroment.hpp"
#include <sstream>
#include <iostream>

int main() {
	std::istringstream iss;
	std::string str; int temp;
	Agent ag;
	Simulator sin;

	std::cout << "Current Temperature/Enter reasonable number between 17C and 26C\n/Enter wrong you ruined it ~ "; 

	//Right input checker program ends if wrong
	std::getline(std::cin, str);
	iss.str(str);
	if (!(iss >> temp))
		return 0;
	if (!(16 < temp && temp < 27))
		return 0;

	Enviroment env(temp);


	while (true) {

	}


	return 0;

}