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
	std::string str; int temp;
	Agent ag;
	Simulator sim;

	std::cout << "Current Temperature\tEnter reasonable number between 17C and 26C\n\t0 to exit ~ "; 

	//Input check
	do {
		temp = inptChkr();
	} while (temp == 0);

	Enviroment env(temp);
	ag.percieve(env);

	while (true) {
		std::cout << "Enter the temperature you want ~ ";

		ag.think(sim);

	}


	return 0;

}

//Right inpute checker
int inptChkr() {
	std::istringstream iss;
	std::string str;
	int temp;

	std::getline(std::cin, str);
	iss.str(str);
	if (!(iss >> temp))
		return 0;
	if (!(16 < temp && temp < 27))
		return 0;

	return temp;
}